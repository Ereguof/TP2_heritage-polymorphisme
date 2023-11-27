/************************************************************************* 
                           Trajet_simple  -  description
                             -------------------
    début                : $DATE$ 
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Trajet_simple> (fichier Trajet_simple.h) ----------------
#if ! defined ( Trajet_simple_H )
#define Trajet_simple_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Trajet_simple>
//
//
//------------------------------------------------------------------------

class Trajet_simple : public Trajet
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
    Trajet_simple ( char * depart, char * arrivee, char * transport );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Trajet_simple ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    char * transport;
};

//-------------------------------- Autres définitions dépendantes de <Trajet_simple>

#endif // Trajet_simple_H
