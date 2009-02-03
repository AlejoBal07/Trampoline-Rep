/**
 * @addtogroup pilote_arm_i2c
 * @{
 */

/**
 * @file i2c_parametres_possibles.h
 *
 * @brief D�finitions de constantes pour le pilote du contr�leur I2C
 *
 * $Author: LaurentMenard $
 * $Date: 2008/01/17 08:47:20 $
 *
 * @version 2.0
 * $Revision: 1.1.1.1 $
 */

#ifndef H_I2C_PARAMETRES_POSSIBLES
#define H_I2C_PARAMETRES_POSSIBLES

/**
 * @name Vitesses de communication autoris�es
 * @{
 */

/** @brief Mode standard : r�glage de la fr�quence d'horloge I2C � 100 kHz */
#define I2C_MODE_STANDARD 0

/** @brief Mode rapide : r�glage de la fr�quence d'horloge I2C � 400 kHz */
#define I2C_MODE_RAPIDE 1

/** @brief Mode standard : r�glage de la fr�quence d'horloge I2C � 100 kHz */
#define I2C_FREQUENCE_STANDARD 100000

/** @brief Mode rapide : r�glage de la fr�quence d'horloge I2C � 400 kHz */
#define I2C_FREQUENCE_RAPIDE 400000

/** @} */

/**
 * @name Commandes de lecture/�criture (registre SAD, bit 7)
 * @{
 */

/** @brief Envoyer une demande de lecture vers un esclave I2C */
#define I2C_LECTURE 1

/** @brief Envoyer une demande d'�criture vers un esclave I2C */
#define I2C_ECRITURE 0

/** @} */

/**
 * @name Commandes de red�marrage : "repeated start" (registre CON, bit 0)
 * @{
 */

/** @brief Red�marrer la trame en cours avec une nouvelle adresse ou un nouveau sens de transfert */
#define I2C_REDEMARRER 1

/** @brief Poursuivre la trame en cours */
#define I2C_CONTINUER 0

/** @} */

/**
 * @name Commandes d'arr�t/poursuite de trame (registre CON, bit 1)
 * @{
 */

/** @brief Laisser la trame ouverte apr�s le transfert d'un octet (pas de condition d'arr�t) */
#define I2C_LAISSER_OUVERT 1

/** @brief Fermer la trame apr�s le transfert d'un octet (condition d'arr�t) */
#define I2C_FERMER 0

/** @} */

/**
 * @name Commande de transfert d'un octet (registre CON, bit 2)
 * @{
 */

/** @brief Effectuer le transfert d'un octet de donn�e */
#define I2C_TRANSFERER 1

/** @} */

/**
 * @name Indicateur d'�tat et commandes d'acquittement
 * @{
 */

/** @brief Indicateur de demande d'interruption en cours (registre IR, bit 0) */
#define I2C_DEMANDE_INTERRUPTION 1

/** @brief Commande d'acquittement de la demande d'interruption en cours (registre IR, bit 0) */
#define I2C_ACQUITTER_INTERRUPTION 1

/** @brief Commande d'acquittement de la donn�e re�ue (registre CON, bit 3) */
#define I2C_ACQUITTER_RECEPTION 0

/** @brief Indicateur d'erreur d'acquittement (registre SR, bits 0 et 1) */
#define I2C_ERREUR 1

/** @} */

/**
 * @name Commandes d'activation/d�sactivation des demandes d'interruptions (registre IMR, bit 0)
 * @{
 */

/** @brief Commande d'activation des demandes d'interruptions */
#define I2C_ACTIVER_INTERRUPTIONS 1

/** @brief Commande de d�sactivation des demandes d'interruptions */
#define I2C_DESACTIVER_INTERRUPTIONS 0

/** @} */

#endif

/** @} */

