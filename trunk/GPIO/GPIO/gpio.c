#include <C167CS.H>
#include "gpio.h"


void InitGPIO(){
	/* Initialisation du port 7 pour le moteur en PWM */
	ODP7 = 0x00; /* sorties push/pull */
	DP7 = 0xFF; /* tous les bits en sortie */
	; /* P7 est toujours en entr�e */
	P7 = 0x00; /* Le signal PWM ne sera pas invers� car les latchs de P7 
				  contiennent des 0 (x XOR 0 = x) */
	
	/*Initialisation du port 8 pour les leds */
	ODP8 = 0x00; /* sorties types push/pull */
	DP8 = 0xFF; /* tous les bits en sortie */
	; /* on doit attendre un cycle machine avant d'affecter une valeur */
	P8 = 0x00; /* valeur initiale sur les leds */
	
	/* Initialisation du port 2 pour les switchs, les boutons et le codeur optique */
	ODP2 = 0xFFFF; /* �tage type open drain */
	DP2 = 0x0000; /* tous les bits en entr�e */
	
	/* Initialisation du port 5 pour les entr�es analogiques */
	P5DIDIS = 0xFFFF; /* Aucune entr�e digitale */

	/* Initialisation des modules de PWM */
	PP0 = MAXPWM;
	PW0 = MAXPWM;
	PP1 = MAXPWM;
	PW1 = MAXPWM;
	PWMCON0 = 0x0000; 
	PWMCON1 = 0x0003;
	PWMIC = 0;

	/* Initialisation des modules de capture/comparaison */
	CCM0 = 0x3333; /* CC(0,1,2,3)IO mode capture (fronts mont & desc) pour les switchs 1-4 */
	CCM1 = 0x3333; /* CC(4,5,6,7)IO mode capture (fronts mont & desc) pour les switch 5-8 */
	CCM2 = 0x2222; /* CC(8,9,10,11)IO en mode capture (fronts desc) pour les boutons 1-4 */
	CCM3 |= 0x0122; /* CC(12,13)IO en mode capture (fronts desc) et CC14IO (front mont) 
					  pour les boutons 5-6 et le codeur optique */
	CC0IC = 0x75; /* Autorisation des interruption et d�finition du niveau de priorit� (1) */
	CC1IC = 0x75; /* ... */
	CC2IC = 0x75; /* ... */
	CC3IC = 0x75; /* ... */
	CC4IC = 0x75; /* ... */
	CC5IC = 0x75; /* ... */
	CC6IC = 0x75; /* ... */
	CC7IC = 0x75; /* ... */
	CC8IC = 0x75; /* ... */
	CC9IC = 0x75; /* ... */
	CC10IC = 0x75;/* ... */
	CC11IC = 0x75;/* ... */
	CC12IC = 0x75;/* ... */
	CC13IC = 0x75;/* ... */
	CC14IC = 0x75;/* ... */
	/* Initialisation du timer 3 */
	T3CON = 0x0007;
	T3 = 46005; /* 46005 pour 1 sec de periode, 63582 pour 100ms */
	T3R = ON;
	T3IC = 0x48;
	/* Initialisation du convertisseur A/N */
	ADCON = 0x0000; /* horloge???, mode simple conversion, entr�e AN0 */
	ADCIC = 0x0000;
	ADEIC = 0x0000;
}
/******************************************************************************
*                   Permet d'utiliser les LED comme bargraph                  *
*                                                                             *
*        - La valeur maximale affichable est donn�e par valmax                *
*        - La valeur demand�e est donn�e par val                              *
*                                                                             *
******************************************************************************/
void BarGraphLED(unsigned int val, unsigned int valmax){
	char nbled,nbdec;
	nbled = (val/(valmax>>3)) & 0x00FF; /* nbled contient le nombre de LED qui vont �tre allum�es */
	if (!nbled){
		P8 = 0;
	}
	else {
		P8 = 1;
		for (nbdec=1;nbdec<nbled;nbdec++){
			P8 <<= 1;/* on d�cale */
			P8++;/* on allume la led de poids faible */
		}
	}
}
/******************************************************************************
*                   Permet d'allumer ou �teindre une LED                      *
*                                                                             *
*         - no est le n� de la led � contr�ler                                *
*         - etat correspond � ON ou OFF                                       *
*                                                                             *
******************************************************************************/
void SetLED(unsigned char no, char etat){
	if (etat) /* allume la led */
		P8 |= (1 << (no-1));
	else 
		P8 &= ~(1 << (no-1));	
}
/******************************************************************************
*   D�finit si le moteur tourne ou non, dans quel sens, � quelle vitesse.     *
*                                                                             *
*        - La valeur maximum admissible pour val est (MAXPWM  / 2)            *
*        - Les param�tres onoff et sens admettent  0 ou 1 comme valeur        *
*                                                                             *
******************************************************************************/
void CMDMoteur(int onoff, int sens, unsigned int val){
	if(onoff){ /* si onoff = ON */
		if (sens){
			PTR0 = ON;
			PTR1 = OFF;
			PW1 = MAXPWM;
			PW0 = MAXPWM - val;
		}
		else {
			PTR0 = OFF;
			PTR1 = ON;
			PW0 = MAXPWM;
			PW1 = MAXPWM - val;
		}
	}
	else { /* si onoff = OFF */
		PW0 = MAXPWM;
		PTR0 = OFF;
		PW1 = MAXPWM;
		PTR1 = OFF;
	}
}
/******************************************************************************
*   D�finit si le moteur tourne ou non, dans quel sens, � quelle vitesse.     *
*                                                                             *
*        - PotNR est le num�ro du potentiom�tre � utiliser                    *
*        - La fonction retourne le r�sultat de l'acquisition de la tension    *
*                                                                             *
******************************************************************************/
unsigned char GetVPot(unsigned char PotNR){
	unsigned char temp;
	ADCON = (PotNR - 1);
	ADCON |= 0x80; /* starts a conversion */
	while(!ADCIR);
	ADCIR = 0;	
	temp = 255 - ((ADDAT >> 2) & 0x00FF);
	return(temp);
}

