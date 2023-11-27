/************************************************************************* 
                           LC  -  description 
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <LC> (fichier LC.h) ----------------
#if ! defined ( LC_H )
#define LC_H

//--------------------------------------------------- Interfaces utilisées
#include "Maillon.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <LC>
//
//
//------------------------------------------------------------------------

class LC
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void Ajouter_queue (Trajet * un_trajet);

    void Afficher_liste ( );

    void Recherche ( char * un_depart, char * une_arrivee);

//-------------------------------------------- Constructeurs - destructeur
    LC ( );
    // Mode d'emploi (constructeur par défaut) :
    //
    // Contrat :
    //

    virtual ~LC ( );
    // Mode d'emploi :
    //
    // Contrat :
    //
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    Maillon * ptr_deb = NULL;
    Maillon * ptr_fin = NULL;
    int taille = 0;
};

//-------------------------------- Autres définitions dépendantes de <LC>

#endif // LC_H

