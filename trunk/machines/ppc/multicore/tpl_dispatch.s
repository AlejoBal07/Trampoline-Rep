/*
 * @file tpl_dispatch.s
 *
 * @section desc File description
 *
 * Trampoline dispatch level for PowerPC port
 *
 * @section copyright Copyright
 *
 * Trampoline OS
 *
 *  Trampoline is copyright (c) IRCCyN 2005-2009
 *  Autosar extension is copyright (c) IRCCyN and ESEO 2007-2009
 *  Trampoline and its Autosar extension are protected by the
 *  French intellectual property law.
 *
 *  This software is distributed under a dual licencing scheme
 *  1 - The Lesser GNU Public Licence v2 (LGPLv2)
 *  2 - The BSD Licence
 *
 * @section infos File informations
 *
 * $Date$
 * $Rev$
 * $Author$
 * $URL$
 */

#include "tpl_service_ids.h"
#include "tpl_os_definitions.h"
#include "tpl_os_kernel_stack.h"
#include "tpl_os_process_stack.h"
#include "tpl_assembler.h"
#include "tpl_app_define.h"

TPL_EXTERN  tpl_dispatch_table
TPL_EXTERN  tpl_kern
TPL_EXTERN  tpl_need_switch

TPL_EXTERN  tpl_save_context
TPL_EXTERN  tpl_load_context
TPL_EXTERN  tpl_kernel_mp
TPL_EXTERN  tpl_user_mp
TPL_EXTERN  tpl_set_process_mp
TPL_EXTERN  tpl_run_elected

  .global tpl_kernel_stack
  .global tpl_kernel_stack_bottom
  .global tpl_sc_handler
  .global tpl_enter_kernel
  .global tpl_leave_kernel
  .global tpl_reentrancy_counter


/****************************************************************************/  
/*
 * A reentrency counter to track system calls made from
 * hook routines
 */
  .data 
  .section .osVar VAR_ACCESS_RIGHT 
  .align  4
tpl_reentrancy_counter: .fill (NUMBER_OF_CORES*4)
  .type tpl_reentrancy_counter,@object
  .size tpl_reentrancy_counter,(NUMBER_OF_CORES*4)

  .text
  .section .osCode CODE_ACCESS_RIGHT

/****************************************************************************/
/**
 * tpl_enter_kernel does all the stuff to switch from
 * the context of the running process to the context
 * of the kernel
 * - it switches to the kernel stack if needed
 * - it saves registers on the kernel stack
 */
tpl_enter_kernel:

#if WITH_MEMORY_PROTECTION == YES
  /*
   * Switch to kernel mem protection scheme
   */
  se_subi   r1,4
  mflr      r11
  e_stw     r11,0(r1)      /* save lr on the current stack */
  e_bl      tpl_kernel_mp  /* disable memory protection    */
  e_lwz     r11,0(r1)      /* restore lr                   */
  mtlr      r11
  se_addi   r1,4
#endif

   /* Check the reentrency counter value and inc it
   * if the value is 0 before the inc, then we switch to
   * the system stack.
   */
  se_mtar   r11,r5
  se_mtar   r12,r6
  mfspr     r6,spr_PIR
  e_slwi    r6,r6,2
  e_lis     r5,TPL_HIG(tpl_reentrancy_counter)
  e_or2i    r5,TPL_LOW(tpl_reentrancy_counter)
  se_add    r5,r6
  e_lwz     r6,0(r5)   /*  get the value of the counter */
  e_cmp16i  r6,0
  e_addi    r6,r6,1
  e_stw     r6,0(r5)

  e_bne     no_stack_change

  /*
   * Switch to the kernel stack
   */
  mfspr     r6,spr_PIR
  e_slwi    r6,r6,2   
  e_lis     r5,TPL_HIG(tpl_kernel_stack_bottom)      /* get the kernel   */
  e_or2i    r5,TPL_LOW(tpl_kernel_stack_bottom)      /* stack bottom ptr */
  se_add    r5,r6 
  e_lwz     r5,0(r5)  
  e_stw     r1,KS_SP-KS_FOOTPRINT(r5)  /*  save the sp of the caller     */
  se_mr     r1,r5                      /*  set the kernel stack          */

no_stack_change:


  
  se_subi   r1,KS_FOOTPRINT  /* make space on the stack to call C functions  */

  /*
   * Save SRR0 and SRR1 filled by the sc done by the caller
   * in the kernel stack. Needed to allow sc in hooks
   */
  mfsrr0    r5
  e_stw     r5,KS_SRR0(r1)
  mfsrr1    r5
  e_stw     r5,KS_SRR1(r1)

  se_mfar   r5,r11
  se_mfar   r6,r12
  
  se_blr

  FUNCTION(tpl_enter_kernel)
  .type tpl_enter_kernel,@function
  .size tpl_enter_kernel,$-tpl_enter_kernel

  
  
/****************************************************************************/
/**
 * tpl_leave_kernel does all the stuff to switch from
 * the context of the kernel to the context
 * of the running process
 * - it switches to the running process stack
 * - it restores registers from the kernel stack
 */
tpl_leave_kernel:

  /*
   * Restore the SRR0 and SRR1 saved in the system stack
   */
  e_lwz     r11,KS_SRR0(r1)
  mtsrr0    r11
  e_lwz     r11,KS_SRR1(r1)
  mtsrr1    r11

  se_addi   r1,KS_FOOTPRINT         /*  free back space on the stack    */

  /*
   * The reentrency counter is decremented. If it reaches
   * 0, the process stack is restored
   */
  se_mtar   r11,r5
  se_mtar   r12,r6  
  mfspr     r6,spr_PIR
  e_slwi    r6,r6,2
  e_lis     r5,TPL_HIG(tpl_reentrancy_counter)
  e_or2i    r5,TPL_LOW(tpl_reentrancy_counter)
  se_add    r5,r6
  e_lwz     r6,0(r5)     /*  get the value of the counter */
  e_subi    r6,r6,1
  e_stw     r6,0(r5)
  e_cmp16i  r6,0
  e_bne     no_stack_restore

  /*  Restore the execution context of the caller
      (or the context of the task/isr which just got the CPU)         */
  e_lwz     r1,KS_SP-KS_FOOTPRINT(r1)  /*  Restore the SP and switch
                                            back to the process stack     */

#if WITH_MEMORY_PROTECTION == YES
  /*
   * Switch to user mem protection scheme
   */
  se_subi   r1,4
  mflr      r11
  e_stw     r11,0(r1)
  e_bl      tpl_user_mp
  e_lwz     r11,0(r1)
  mtlr      r11
  se_addi   r1,4
#endif

no_stack_restore:
  se_mfar   r5,r11
  se_mfar   r6,r12
  
  se_blr

  FUNCTION(tpl_leave_kernel)
  .type tpl_leave_kernel,@function
  .size tpl_leave_kernel,$-tpl_leave_kernel

  
/****************************************************************************/
  .text
  .section  .SC_vector  CODE_ACCESS_RIGHT
  .global tpl_sc_vector
tpl_sc_vector:
  e_b   tpl_sc_handler

  FUNCTION(tpl_sc_vector)
  .type tpl_sc_vector,@function
  .size tpl_sc_vector,$-tpl_sc_vector

  .text
  .section  .SC_handler CODE_ACCESS_RIGHT

  
/****************************************************************************/  
/**
 * System call handler
 *
 * This is the second part of the handler. The first part is in the system
 * call interrupt vector. This first part branches to this function.
 */

tpl_sc_handler:


  /* The first thing to do is to check the service id is a valid one  */

  e_cmp16i  r0,SYSCALL_COUNT              /* check the service id is in   */
  e_bge     invalid_service_id            /* the allowed range            */

  /*
   * The second thing is to save some working registers on the
   * process stack. r0 has already been saved by the function that
   * did the system call and used to pass the service id.
   * Here, we save lr, cr, r11 and r12. This is not needed
   * in fact since these registers are volatile but we want to start
   * with a symetrical scheme compared to the interrupt handler.
   * In addition, a 16 bytes space may be allocated on the top of the
   * process stack to save the SRR0 and SRR1 and to put the linkage area
   * if the CallTrustedFunction service is called.
   *
   * See the tpl_os_process_stack.h file for stack mapping
   *
   */
  se_subi   r1,PS_FOOTPRINT

  e_stw     r11,PS_R11(r1)
  e_stw     r12,PS_R12(r1)
  mflr      r11
  e_stw     r11,PS_LR(r1)
  mfcr      r11
  e_stw     r11,PS_CR(r1)
  e_stw     r0,PS_R0(r1)

  /*
   * Does the stuff to enter in kernel
   */
  e_bl      tpl_enter_kernel

  /*
   * Then get the pointer to the service that is called
   */
  se_slwi   r0,2                                /* compute the offset     */
  e_lis     r11,TPL_HIG(tpl_dispatch_table)     /* load the ptr to the    */
  e_or2i    r11,TPL_LOW(tpl_dispatch_table)     /* dispatch table         */
  lwzx     r11,r11,r0                     /* get the ptr to the service   */
  mtlr      r11                           /* put it in lr for future use  */

  /*
   * Reset the tpl_need_switch variable to NO_NEED_SWITCH before
   * calling the service. This is needed because, beside
   * tpl_schedule, no service modify this variable. So an old value
   * is retained
   */
  se_mtar   r11,r5
  se_mtar   r12,r6  
  
  mfspr     r6,spr_PIR
  se_slwi   r6,2                          /* get core number, and multiply by 4, to get the index of table tpl_kern[] */
  e_lis     r5,TPL_HIG(tpl_kern)
  e_or2i    r5,TPL_LOW(tpl_kern)
  se_add    r5,r6
  e_lwz     r5,0(r5)
  e_stw     r5,KS_KERN_PTR(r1)            /* save the ptr for future use  */

  se_mfar   r5,r11
  se_mfar   r6,r12
  
  /*
   * Set the RI bit of the MSR to allow sc in hooks
   */
  mfmsr     r11
  e_or2i    r11,RI_BIT_1
  mtmsr     r11

  /*
   * Call the service
   */
  se_blrl

  /*
   * r3 will be destroyed by the call to tpl_save_context. It is save
   * in the ad hoc area since it is the return code of the service
   */
  e_stw     r3,KS_RETURN_CODE(r1)

  /*
   * Check the tpl_need_switch variable
   * to see if a switch should occur
   */
  e_lwz     r11,KS_KERN_PTR(r1)
  e_lbz     r12,24(r11)
  e_andi.   r12,r12,NEED_SWITCH
  e_beq     no_context_switch

  /*
   * Check if context of the task/isr that just lost the CPU needs
   * to be saved. No save is needed for a TerminateTask or ChainTask
   */
  e_lbz     r12,24(r11) 
  e_andi.   r12,r12,NEED_SAVE
  e_beq     no_save

  /*
   * get the context pointer of the task that just lost the CPU
   */
  e_lwz     r3,0(r11)                     /* get s_running */
  e_bl      tpl_save_context



no_save:

#if WITH_MEMORY_PROTECTION == YES
  /*
   * set up the memory protection for the process that just got the CPU
   */
  e_lwz     r11,KS_KERN_PTR(r1)
  e_lwz     r3,16(r11)    /* get the id of the process which get the cpu  */
  e_bl      tpl_set_process_mp        /* set the memory protection scheme */
#endif


  se_li     r3,0          /* set save parameter to 0 */
  /* get tpl_kern[].need_switch, and pass it as parameter of tpl_run_elected */
  e_lwz     r11,KS_KERN_PTR(r1)
  e_lbz     r12,24(r11) 
  e_andi.   r12,r12,NEED_SAVE
  e_beq     call_tpl_run_elected
  se_li     r3,1          /* set save parameter to 1 */
call_tpl_run_elected:  
  e_bl      tpl_run_elected
 
  e_lwz     r11,KS_KERN_PTR(r1)
  e_lwz     r3,0(r11)                     /* get s_running (it has been changed by tpl_run_elected) */ 
  e_bl      tpl_load_context


  /* TODO */
no_context_switch:

  /*
   * Reset the tpl_need_switch variable to NO_NEED_SWITCH 
   */
  e_lwz     r11,KS_KERN_PTR(r1)
  e_li      r12,NO_NEED_SWITCH
  e_stb     r12,24(r11)
  
  /*
   * r3 is restored (ie get back the return code)
   */
  e_lwz     r3,KS_RETURN_CODE(r1)

  /*
   * does the stuff to leave the kernel
   */
  e_bl      tpl_leave_kernel

  /*  restore the registers before returning                          */

  e_lwz     r0,PS_R0(r1)
  e_lwz     r11,PS_CR(r1)
  mtcr      r11
  e_lwz     r11,PS_LR(r1)
  mtlr      r11
  e_lwz     r12,PS_R12(r1)
  e_lwz     r11,PS_R11(r1)

  se_addi   r1,PS_FOOTPRINT

invalid_service_id:
  se_isync
  se_rfi                              /* return from interrupt        */

  FUNCTION(tpl_sc_handler)
  .type tpl_sc_handler,@function
  .size tpl_sc_handler,$-tpl_sc_handler
