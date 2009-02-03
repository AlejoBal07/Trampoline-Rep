/*
 * Fichier : startup.s
 *
 * Programme de d�marrage de l'application.
 *
 * Ce module prend en charge les points suivants :
 *   - d�finition du vecteur 0 pour le d�marrage du programme au reset du processeur
 *   - allocation d'une zone de pile et initialisation du pointeur de pile
 *   - appel de la fonction main
 *   - blocage du processeur après le retour de main
 *
 * $Date: 2008/05/20 12:09:34 $
 * $Rev$
 * $Author: GuillaumeNuth $
 * $URL$
 */
 
/* ---------------------------------------------------------------------------- *
 * Constantes symboliques
 * ---------------------------------------------------------------------------- */
 
.set CPSR_SVC, 0xd3
.set CPSR_IRQ, 0xd2
.set CPSR_FIQ, 0xd1
.set CPSR_USR, 0xd0

/* ---------------------------------------------------------------------------- *
 * Section de programme
 * ---------------------------------------------------------------------------- */
 
	.text
 
/* L'�tiquette start d�signe le point d'entr�e du programme.
 *
 * Le but de ce programme de d�marrage est d'effectuer les initialisations
 * n�cessaires au bon d�roulement de l'application.*/
 
	.align 2
 
   .global start

start:

	

	/* Initialisation du pointeur de pile en mode IRQ */
    msr cpsr_c, #CPSR_IRQ
	ldr sp, =irq_stack_bottom
 	
	/* Initialisation du pointeur de pile en mode FIQ */
    msr cpsr_c, #CPSR_FIQ
	ldr sp, =fiq_stack_bottom
 	
	/* Initialisation du pointeur de pile en mode superviseur */
/*    msr cpsr_c, #CPSR_SVC
	ldr sp, =svc_stack_bottom*/
 	
 	/* Initialisation du pointeur de pile en mode USR */
  	msr cpsr_c, #CPSR_USR
	ldr sp, =svc_stack_bottom

    bl Memoire_initialiser
    bl main
 
		/* Blocage du processeur dans une boucle infinie vide */
forever:
	b forever
	
	
/* La valeur 0xDFFFDFFF est reconnue par le BDI2000 comme un point d'arr�t GDB.
 * Cette valeur ne donnera pas le r�sultat escompt� si le syst�me n'est pas
 * control� par le BDI2000. */

Startup_fin:
   .word 0xDFFFDFFF

	/* Blocage du processeur dans une boucle infinie vide */
	b .

