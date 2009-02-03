/**
 * @addtogroup pilote_arm_i2c
 * Pilote du contr�leur de bus I2C du microcontr�leur OKI ML675001
 * @{
 */

/**
 * @file i2c.h
 *
 * @brief Interface du pilote de contr�leur I2C pour le microcontr�leur OKI ML675001
 *
 * $Author: LaurentMenard $
 * $Date: 2008/01/17 08:47:20 $
 *
 * @version 1.0
 * $Revision: 1.1.1.1 $
 */

#include "miro_types.h"

#ifndef H_I2C
#define H_I2C

/**
 * @brief Codes d'erreur de communication
 *
 * Ces codes sont retourn�s par la fonction I2C_get_code_erreur()
 */
typedef enum
{
   /** @brief Un acquittement a �t� re�u pour l'adresse et pour la donn�e �chang�e sur le bus */
   I2C_OK,

   /** @brief Aucun esclave I2C n'a acquitt� l'adresse utilis�e pour le dernier transfert */
   I2C_ERREUR_ADRESSE,

   /** @brief L'esclave I2C � qui une donn�e �tait destin�e n'a pas acquitt� la trame de donn�e */
   I2C_ERREUR_DONNEE
} I2C_CodeErreur;

/**
 * @name Fonction d'initialisation
 * @{
 */

/**
 * @brief Initialisation du contr�leur de bus I2C
 *
 * Cette fonction initialise le contr�leur de bus I2C avec les r�glages d�finis dans le fichier
 * i2c_configuration_par_defaut.h
 */
void I2C_initialiser ();

/** @} */

/**
 * @name Fonctions de configuration
 * @{
 */ 

/**
 * @brief Configuration de la vitesse de transmission
 *
 * Cette fonction permet de reconfigurer la fr�quence de l'horloge I2C.
 * Deux valeurs de vitesse sont propos�es : 100 kHz (mode standard) et 400 kHz (mode rapide).
 *
 * @param vitesse Choix de la vitesse (valeurs possibles : I2C_MODE_STANDARD, I2C_MODE_RAPIDE)
 */
void I2C_set_vitesse (int vitesse);
 
/** @} */

/**
 * @name Fonctions d'�changes de donn�es
 * @{
 */

/**
 * @brief Ecriture d'une donn�e sur le bus I2C
 *
 * Cette fonction envoie un octet � un p�riph�rique I2C.
 * Lorsque cette fonction se termine, la trame d'�criture n'est pas arr�t�e.
 * Des appels successifs � cette fonction vers la m�me adresse se feront donc
 * dans la m�me trame I2C.
 *
 * @param adresse L'adresse du p�riph�rique sur le bus I2C
 * @param donnee La donn�e � �crire
 */
void I2C_ecrire (UInt8 adresse, UInt8 donnee);

/**
 * @brief Ecriture d'une donn�e sur le bus I2C et fin de trame
 *
 * Cette fonction envoie un octet � un p�riph�rique I2C et termine la trame en cours.
 *
 * @param adresse L'adresse du p�riph�rique sur le bus I2C
 * @param donnee La donn�e � �crire
 */
void I2C_ecrire_et_stopper (UInt8 adresse, UInt8 donnee);

/**
 * @brief lecture d'une donn�e provenant du bus I2C
 *
 * Cette fonction effectue la lecture d'un octet sur un p�riph�rique I2C.
 * Lorsque cette fonction se termine, la trame de lecture n'est pas arr�t�e.
 * Des appels successifs � cette fonction vers la m�me adresse se feront donc
 * dans la m�me trame I2C.
 *
 * @param adresse L'adresse du p�riph�rique sur le bus I2C
 * @return La donn�e lue
 */
UInt8 I2C_lire (UInt8 adresse);

/**
 * @brief lecture d'une donn�e provenant du bus I2C et fin de trame
 *
 * Cette fonction effectue la lecture d'un octet sur un p�riph�rique I2C et termine la trame en cours.
 *
 * @param adresse L'adresse du p�riph�rique sur le bus I2C
 * @return La donn�e lue
 */
UInt8 I2C_lire_et_stopper(UInt8 adresse);

/**
 * @brief Attendre l'acquittement d'un esclave I2C
 *
 * Cette fonction attend la fin du transfert en cours.
 * D�s que la condition d'acquittement a �t� re�ue de la part de l'esclave, cette fonction
 * acquitte automatiquement les demandes d'interruptions en cours.
 *
 * Les �ventuelles erreurs peuvent �tre obtenues � l'aide de la fonction I2C_get_code_erreur().
 */
void I2C_attendre_acquittement ();

/** @} */

/**
 * @name Fonctions de gestion des �v�nements
 * @{
 */

/**
 * @brief Activer les demandes d'interruption I2C.
 */
void I2C_activer_interruptions ();

/**
 * @brief D�sactiver les demandes d'interruption I2C.
 */
void I2C_desactiver_interruptions ();

/** @} */

/**
 * @name Fonctions de gestion des erreurs
 * @{
 */

I2C_CodeErreur I2C_get_code_erreur ();

/** @} */

#endif

/** @} */

