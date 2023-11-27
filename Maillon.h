/************************************************************************* 
                           Maillon  -  description 
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Maillon> (fichier Maillon.h) ----------------
#if ! defined ( Maillon_H )
#define Maillon_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
#include "Trajet_simple.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Maillon>
//
//
//------------------------------------------------------------------------

class Maillon
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void Set_next( Maillon * un_next );
    Maillon * Get_next( );
    Trajet * Get_trajet( );

//-------------------------------------------- Constructeurs - destructeur
    Maillon ( );
    // Mode d'emploi (constructeur par défaut) :
    //
    // Contrat :
    //

    Maillon ( Trajet * trajet );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Maillon ( );
    // Mode d'emploi :
    //
    // Contrat :
    //
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    Trajet * trajet;
    Maillon * next; 
};

//-------------------------------- Autres définitions dépendantes de <Maillon>

#endif // Maillon_H

