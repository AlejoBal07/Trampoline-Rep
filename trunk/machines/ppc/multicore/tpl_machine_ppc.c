/**
 * @file tpl_machine_pp.c
 *
 * @section descr File description
 *
 * Trampoline machine dependant functions
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
 * This software is distributed under the Lesser GNU Public Licence
 *
 * @section infos File informations
 *
 * $Date: $
 * $Rev: $
 * $Author: $
 * $URL: $
 */

#include "tpl_os_internal_types.h"
#include "tpl_os_kernel.h"
#include "tpl_machine.h"
#include "tpl_machine_interface.h"
#include "tpl_os.h"
#include "tpl_app_define.h"
#include "tpl_timers.h"
#include "tpl_orti.h"
#include "tpl_registers.h"
#include "tpl_os_multicore_macros.h"
#include "tpl_as_spinlock_kernel.h"

/*****************************************************************************/
/* VERSION CHECKING                                                          */
/*****************************************************************************/
#define OS_C_FILE_MAJOR_VERSION 0
#define OS_C_FILE_MINOR_VERSION 4

#if ((OS_SW_MAJOR_VERSION != OS_C_FILE_MAJOR_VERSION)   \
     || (OS_SW_MINOR_VERSION != OS_C_FILE_MINOR_VERSION))
#error "Os.h et Os.c files do not have the same version"
#endif

#if ((OS_SW_MAJOR_VERSION != OS_CFG_H_FILE_MAJOR_VERSION)       \
     || (OS_SW_MINOR_VERSION != OS_CFG_H_FILE_MINOR_VERSION))
#error "Os.h et Os_Cfg.h files do not have the same version"
#endif

/* Autosar version check between Os.h and configuration files */
#if ((OS_AR_RELEASE_MAJOR_VERSION != OS_CFG_H_FILE_AR_RELEASE_MAJOR_VERSION) \
     || (OS_AR_RELEASE_MINOR_VERSION != OS_CFG_H_FILE_AR_RELEASE_MINOR_VERSION) \
     || (OS_AR_RELEASE_REVISION_VERSION != OS_CFG_H_FILE_AR_RELEASE_REVISION_VERSION))
#error "Os.h and Os_Cfg.h files do not have the same AUTOSAR release version"
#endif


#define TPL_CORE_0_SW_ISR_SET   TPL_INTC_SET_6
#define TPL_CORE_0_SW_ISR_CLR   TPL_INTC_CLR_6
#define TPL_CORE_1_SW_ISR_SET   TPL_INTC_SET_7
#define TPL_CORE_1_SW_ISR_CLR   TPL_INTC_CLR_7



#define OS_START_SEC_VAR_32
#include "tpl_memmap.h"

VAR(uint32, OS_VAR)   tpl_current_date[NUMBER_OF_CORES];

#if WITH_MULTICORE == YES
extern volatile VAR(uint32, OS_VAR) tpl_locking_depth[NUMBER_OF_CORES];
extern VAR(uint32, OS_VAR) tpl_cpt_os_task_lock[NUMBER_OF_CORES];
#else
extern volatile VAR(uint32, OS_VAR) tpl_locking_depth;
extern VAR(uint32, OS_VAR) tpl_cpt_os_task_lock;
#endif

#define OS_STOP_SEC_VAR_32
#include "tpl_memmap.h"


#if WITH_MULTICORE == YES
#define OS_START_SEC_CONST_UNSPECIFIED
#include "tpl_memmap.h"
STATIC CONSTP2VAR(uint8, OS_CONST, AUTOMATIC) tpl_gate = SEMA4_BASE+SEMA4_GATES;
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "tpl_memmap.h"
#endif


#define OS_START_SEC_CODE
#include "tpl_memmap.h"

#if WITH_MULTICORE == YES
STATIC FUNC(void, OS_CODE) tpl_get_spin_lock(
  VAR(uint32, AUTOMATIC) lock);
  
STATIC FUNC(void, OS_CODE) tpl_release_spin_lock(
  VAR(uint32, AUTOMATIC) lock);
#endif

  
FUNC(void, OS_CODE) tpl_get_task_lock(void)
{
  GET_CURRENT_CORE_ID(core_id)
  
  if (0 == GET_LOCK_CNT_FOR_CORE(tpl_locking_depth,core_id) )
  {
    tpl_disable_interrupts();
  }

  GET_LOCK_CNT_FOR_CORE(tpl_locking_depth,core_id)++;

  GET_LOCK_CNT_FOR_CORE(tpl_cpt_os_task_lock,core_id)++;

}


FUNC(void, OS_CODE) tpl_release_task_lock(void)
{
  GET_CURRENT_CORE_ID(core_id)
  
  if( GET_LOCK_CNT_FOR_CORE(tpl_cpt_os_task_lock,core_id) != 0 )
  {
    GET_LOCK_CNT_FOR_CORE(tpl_locking_depth,core_id)--;

    GET_LOCK_CNT_FOR_CORE(tpl_cpt_os_task_lock,core_id)--;

    if( GET_LOCK_CNT_FOR_CORE(tpl_locking_depth,core_id) == 0)
    {
      tpl_enable_interrupts();
    }
  }
}

FUNC(void, OS_CODE) tpl_get_task_lock_with_sc(void)
{
  GET_CURRENT_CORE_ID(core_id)
  
  GET_LOCK_CNT_FOR_CORE(tpl_locking_depth,core_id)++;
  GET_LOCK_CNT_FOR_CORE(tpl_cpt_os_task_lock,core_id)++;
}


FUNC(void, OS_CODE) tpl_release_task_lock_with_sc(void)
{
  GET_CURRENT_CORE_ID(core_id)
  
  if( GET_LOCK_CNT_FOR_CORE(tpl_cpt_os_task_lock,core_id) != 0 )
  {
    GET_LOCK_CNT_FOR_CORE(tpl_locking_depth,core_id)--;
    GET_LOCK_CNT_FOR_CORE(tpl_cpt_os_task_lock,core_id)--;
  }
}


#if WITH_STACK_MONITORING == YES
/**
 * tpl_check_stack_pointer checks the stack pointer is in the bounds of the process stack
 *
 * @param proc_id   id of the task.isr to check the stack pointer
 *
 * @return  1 if in the bounds
 *          0 if not in the bounds
 *
 */
FUNC(tpl_bool, OS_CODE) tpl_check_stack_pointer(
  CONST(tpl_proc_id, AUTOMATIC) proc_id)
{
    VAR(uint32, AUTOMATIC) stack_pointer = tpl_stat_proc_table[proc_id]->context.ic->gpr[1];
    VAR(tpl_bool, AUTOMATIC) ret;


/* MISRA RULE 1,45 VIOLATION: cast between pointer and integer is
   implementation specific, but Os is implementation specific and
   this cast is absolutely needed */

    if( (stack_pointer < (uint32)tpl_stat_proc_table[proc_id]->stack.stack_zone)
      ||(stack_pointer > ((uint32)tpl_stat_proc_table[proc_id]->stack.stack_zone
                        + tpl_stat_proc_table[proc_id]->stack.stack_size)) )
    {
        ret = 0;
    }
    else
    {
        ret = 1;
    }

    return ret;
}


/**
 * tpl_check_stack_footprint checks the footprint at the bottom of
 * the stack has not been erased, meaning there was a stack overflow
 *
 * @param stack   pointer to the stack to check
 *
 * @return  1 if stack pattern is there
 *          0 if stack pattern has been erased
 *
 */
FUNC(tpl_bool, OS_CODE) tpl_check_stack_footprint(
  P2CONST(tpl_stack, AUTOMATIC,OS_APPL_DATA) stack)
{
    VAR(tpl_bool, AUTOMATIC) ret;


    if( TPL_FULL_STACK_PATTERN == (*(uint32 *)(stack->stack_zone)) )
    {
        ret = 1;
    }
    else
    {
        ret = 0;
    }

    return ret;
}
#endif /* WITH_STACK_MONITORING */


#if WITH_ORTI == YES
/**
 * tpl_fill_stack_pattern fills all the stacks with the pattern,
 * so stack usage can be mesured by ORTI debugger
 *
 */
FUNC(void, OS_CODE) tpl_fill_stack_pattern(void)
{
  P2VAR(uint32, AUTOMATIC, OS_VAR) addr;
  P2VAR(uint8, AUTOMATIC, OS_VAR) stack_top;
  P2VAR(uint8, AUTOMATIC, OS_VAR) stack_bottom;
  VAR(uint8, AUTOMATIC) i;


#if TASK_COUNT > 0
  for (i = 0; i < TASK_COUNT; i++)
  {
    /*
     * MISRA RULE 11.4 VIOLATION: casting from uint32* to uint8*,
     * but that is the expected behavior, we want to access per byte the stack
     * MISRA RULE 17.4 VIOLATION: performing pointer arithmetic needed to compute stack address
     */
    stack_top = (uint8*)((tpl_stat_proc_table[i]->stack.stack_zone));
    stack_bottom = stack_top + (tpl_stat_proc_table[i]->stack.stack_size);

    for(addr=(uint32*)stack_top; addr < (uint32*)stack_bottom; addr++)
    {
      *addr = TPL_FULL_STACK_PATTERN;
    }

  }
#endif

#if ISR_COUNT > 0
  for (i = TASK_COUNT; i < TASK_COUNT + ISR_COUNT; i++)
  {
    /*
     * MISRA RULE 11.4 VIOLATION: casting from uint32* to uint8*,
     * but that is the expected behavior, we want to access per byte the stack
     */
    stack_top = (uint8*)((tpl_stat_proc_table[i]->stack.stack_zone));
    stack_bottom = stack_top + tpl_stat_proc_table[i]->stack.stack_size;

    for(addr=(uint32*)stack_top; addr < (uint32*)stack_bottom; addr++)
    {
      *addr = TPL_FULL_STACK_PATTERN;
    }

  }
#endif

  /* fill system stack */
  /*
   * MISRA RULE 11.4 VIOLATION: casting from uint32* to uint8*,
   * but that is the expected behavior, we want to access per byte the stack
   * MISRA RULE 17.4 VIOLATION: performing pointer arithmetic needed to compute stack address
   */
  stack_top = (uint8*)(tpl_orti_system_stack_top);
  stack_bottom = (uint8*)(tpl_orti_system_stack_bottom);

  for(addr=(uint32*)stack_top; addr < (uint32*)stack_bottom; addr++)
  {
    *addr = TPL_FULL_STACK_PATTERN;
  }


}
#endif



#if WITH_AUTOSAR_TIMING_PROTECTION == YES
/**
 * tpl_set_watchdog sets a watchdog for timing protection with a given timeout
 *
 * @param delay   delay before the watchdog expires
 *
 *
 */
FUNC(void, OS_CODE) tpl_set_watchdog(
  VAR(tpl_time, AUTOMATIC) delay)
{
  tpl_load_pit(TPL_WDG_TIMER, TPL_PIT_VALUE(delay));
}


/**
 * tpl_cancel_watchdog stops a watchdog previously started
 *
 *
 */
FUNC(void, OS_CODE) tpl_cancel_watchdog(void)
{
  tpl_stop_pit(TPL_WDG_TIMER);
}


/**
 * tpl_get_local_current_date returns the current date in number of ticks
 *
 * @return the current date
 *
 *
 */
FUNC(tpl_time, OS_CODE) tpl_get_local_current_date(void)
{
  return tpl_current_date;
}

#endif



#if WITH_MULTICORE == YES

/**
 * @internal
 *
 * This function starts the processing core given in the argument
 */
FUNC(void, OS_CODE) tpl_start_core(
  CONST(CoreIdType, AUTOMATIC) core_id)
{
  
  if(core_id!=OS_CORE_ID_MASTER)
  {
    /* write slave core start adresse */
    *(uint32 *)(SSCM_BASE+DPM_BOOT) = (uint32)tpl_slave_core_startup | 0x02UL;
    
    /* write key and inverted key to start the core */
    *(uint32 *)(SSCM_BASE+DPM_BOOT_KEY) = TPL_BOOT_KEY_1;
    *(uint32 *)(SSCM_BASE+DPM_BOOT_KEY) = TPL_BOOT_KEY_2;
  }
}


/**
 * @internal
 *
 * This function sends an interrupt on the other core
 */
FUNC(void, OS_CODE) tpl_send_intercore_it(
  CONST(CoreIdType, AUTOMATIC) core_id)
{
  
  /* set software interrupt flag on the given core */
  if(core_id==0)
  {
    *(uint32*)((uint8*)tpl_intc[core_id] + (uint8)TPL_INTC_SSCIR47) = TPL_CORE_0_SW_ISR_SET;
  }
  else
  {
    *(uint32*)((uint8*)tpl_intc[core_id] + (uint8)TPL_INTC_SSCIR47) = TPL_CORE_1_SW_ISR_SET;
  }
  
}


/**
 * @internal
 *
 * This function execute an interrupt send by another core
 * It is used to force context switch on a given core
 */
FUNC(boolean, OS_CODE) tpl_receive_intercore_it(void)
{
  GET_CURRENT_CORE_ID(core_id)
    
  /* clear interrupt flag */
  if(core_id==0)
  {
    *(uint32*)((uint8*)tpl_intc[core_id] + (uint8)TPL_INTC_SSCIR47) = TPL_CORE_0_SW_ISR_CLR;
  }
  else
  {
    *(uint32*)((uint8*)tpl_intc[core_id] + (uint8)TPL_INTC_SSCIR47) = TPL_CORE_1_SW_ISR_CLR;
  }

  TPL_KERN(core_id).need_switch = NEED_SWITCH | NEED_SAVE;
  
  /* return true to restore cpu priority */
  return TRUE;
}


/**
 * @internal
 *
 * 
 */ 
FUNC(void, OS_CODE) tpl_get_lock(
  CONSTP2VAR(tpl_lock, AUTOMATIC, OS_VAR) lock)
{
  volatile VAR(tpl_lock, AUTOMATIC) tmp_lock;
  
  
  do 
  {
    tpl_get_spin_lock(TPL_GATE_LOCK);
    tmp_lock=*lock;
    if(*lock==UNLOCKED_LOCK)
    {
      *lock = LOCKED_LOCK;
    }
    tpl_release_spin_lock(TPL_GATE_LOCK);
  } while(tmp_lock!=UNLOCKED_LOCK);
  
}
 
 
/**
 * @internal
 *
 * 
 */ 
FUNC(void, OS_CODE) tpl_release_lock(
  CONSTP2VAR(tpl_lock, AUTOMATIC, OS_VAR) lock)
{
  
  tpl_get_spin_lock(TPL_GATE_LOCK);
  *lock = UNLOCKED_LOCK;
  tpl_release_spin_lock(TPL_GATE_LOCK);
  
}


/**
 * @internal
 *
 * 
 */ 
FUNC(void, OS_CODE) tpl_try_to_get_lock(
  CONSTP2VAR(tpl_lock, AUTOMATIC, OS_VAR) lock,
  P2VAR(tpl_try_to_get_spinlock_type, AUTOMATIC, OS_VAR) success)
{
  volatile VAR(tpl_lock, AUTOMATIC) tmp_lock;
  
  
    tpl_get_spin_lock(TPL_GATE_LOCK);
    if(*lock==UNLOCKED_LOCK)
    {
      *lock = LOCKED_LOCK;
      *success = TRYTOGETSPINLOCK_SUCCESS;
    }
    else
    {
      *success = TRYTOGETSPINLOCK_NOSUCCESS;
    }
    tpl_release_spin_lock(TPL_GATE_LOCK);


  
}


/**
 * @internal
 *
 * 
 */
STATIC FUNC(void, OS_CODE) tpl_get_spin_lock(
  VAR(uint32, AUTOMATIC) lock)
{
  VAR(uint16, AUTOMATIC) core_id = tpl_get_core_id();
  VAR(uint8, AUTOMATIC) core_lock;
  volatile VAR(uint8, AUTOMATIC) current_value;
  /*
   * retrieve the key to lock the core */
  if(core_id==OS_CORE_ID_0)
  {
    core_lock=TPL_GATE_CPU0_LOCK;
  }
  else
  {
    core_lock=TPL_GATE_CPU1_LOCK;
  }
  
  /* wait until the lock is free */
  do
  {
    current_value = tpl_gate[lock]; 
  } while(TPL_GATE_UNLOCK != current_value);
  
  /* try to get the lock, until we have it */
  do
  {
    tpl_gate[lock] = core_lock;
    current_value = tpl_gate[lock]; 
  } while(current_value != core_lock);
  
  
}
 

/**
 * @internal
 *
 * 
 */ 
STATIC FUNC(void, OS_CODE) tpl_release_spin_lock(
  VAR(uint32, AUTOMATIC) lock)
{
  VAR(uint16, AUTOMATIC) core_id = tpl_get_core_id();
  VAR(uint8, AUTOMATIC) core_lock;
  volatile VAR(uint8, AUTOMATIC) current_value;
  /*
   * retrieve the key to lock the core */
  if(core_id==OS_CORE_ID_0)
  {
    core_lock=TPL_GATE_CPU0_LOCK;
  }
  else
  {
    core_lock=TPL_GATE_CPU1_LOCK;
  }
  
  /* check we actually have the lock */
  current_value = tpl_gate[lock]; 
  if(current_value==core_lock)
  {
    /* release the lock */
    tpl_gate[lock] = TPL_GATE_UNLOCK;
  }
  
}
#endif


#define OS_STOP_SEC_CODE
#include "tpl_memmap.h"
