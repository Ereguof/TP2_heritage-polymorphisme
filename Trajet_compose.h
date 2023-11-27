/*************************************************************************
                           Trajet_compose  -  description
                             -------------------
    début                : $DATE$ 
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Trajet_compose> (fichier Trajet_compose.h) ----------------
#if ! defined ( Trajet_compose_H )
#define Trajet_compose_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
#include "Maillon.h"
#include "LC.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Trajet_compose>
//
//
//------------------------------------------------------------------------

class Trajet_compose : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void Afficher ( );

//-------------------------------------------- Constructeurs - destructeur
    Trajet_compose ( char * un_depart, char * une_arrivee, LC * une_liste_escales); 
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Trajet_compose ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    LC * liste_escales;
};

//-------------------------------- Autres définitions dépendantes de <Trajet_compose>

#endif // Trajet_compose_H
