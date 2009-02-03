/**
 * @addtogroup pilote_arm_i2c
 * @{
 */

/**
 * @file i2c_registres.h
 *
 * @brief D�finition des registres du contr�leur I2C pour le microcontr�leur OKI ML675001
 *
 * $Author: LaurentMenard $
 * $Date: 2008/01/17 08:47:20 $
 *
 * @version 2.0
 * $Revision: 1.1.1.1 $
 */

#ifndef H_I2C_REGISTRES
#define H_I2C_REGISTRES

/**
 * @name Adressage des registres du contr�leur I2C
 * @{
 */

/** @brief Adresse de base des registres du contr�leur de bus I2C */
#define I2C_ADRESSE_BASE 0xB7800000

/** @} */

/**
 * @brief Structure d'un registre du contr�leur I2C
 *
 * Les registres du contr�leur I2C sont tous sur 8 bits, mais align�s sur des adresses multiples de 4.
 */
typedef volatile struct
{
   /** @brief La valeur du registre */
   UInt8 valeur;

   int : 24;

} I2C_Reg8;

/** @brief Structure d'un registre du contr�leur I2C ne comportant qu'un bit utile */
typedef volatile struct
{
   /** @brief La valeur du registre */
   unsigned valeur : 1;

   int : 31;

} I2C_Reg1;

/** @brief Champs du registre de gestion des signaux de contr�le du bus I2C */
typedef volatile struct
{
   /** @brief D�clencher un red�marrage de trame (restart condition) */
   unsigned en : 1;

   /** @brief Terminer la trame � la fin de la lecture ou �criture en cours (stop condition) */
   unsigned oc : 1;

   /** @brief Indicateur de transmission ou r�ception en cours */
   unsigned stcm : 1;

   /** @brief Contr�le de l'acquittement pour la prochaine donn�e en r�ception */
   unsigned restr : 1;

   /** @brief Indicateur de pr�sence d'un octet de d�marrage (start byte) */
   unsigned start : 1;

   unsigned : 27;

} I2C_RegCon;

/** @brief Champs du registre d'adresse du contr�leur I2C */
typedef volatile struct
{
   /** @brief Indicateur de sens de transfert */
   unsigned rw : 1;

   /** @brief Valeur de l'adresse */
   unsigned sad : 7;

   unsigned : 24;

} I2C_RegSad;

/** @brief Champs du registre d'�tat du contr�leur I2C */
typedef volatile struct
{
   /** @brief Indicateur d'erreur d'acquittement d'un octet de donn�e */
   unsigned dak : 1;

   /** @brief Indicateur d'erreur d'acquittement d'une adresse */
   unsigned aak : 1;

   unsigned : 30;

} I2C_RegSr;

/** @brief Agencement des registres du contr�leur I2C dans le plan d'adressage */
typedef volatile struct
{
   /** @brief Gestion des signaux de contr�le du bus */
   I2C_RegCon con;

   /** @brief Adresse de l'esclave I2C */
   I2C_RegSad sad;

   /** @brief S�lection de la vitesse (mode standard, mode rapide) */
   I2C_Reg1 clr;

   /** @brief Registre d'�tat des communications I2C en cours */
   I2C_RegSr sr;

   /** @brief Indicateur de demande d'interruption */
   I2C_Reg1 ir;

   /** @brief Activation/d�sactivation des demandes d'interruptions */
   I2C_Reg1 imr;

   /** @brief Donn�e en �mission ou en r�ception */
   I2C_Reg8 dr;

   /** @brief Registre de configuration du diviseur de fr�quence pour la g�n�ration de l'horloge I2C */
   I2C_Reg8 bc;

} I2C;

#endif

/** @} */

