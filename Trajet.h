/******************************************************************************************
                           Trajet  -  Classe implémentant un trajet
                             -------------------
    début                : 11/2023
    copyright            : (C) 11/2023 par Joris FELZINES - Guillaume MANTZARIDES
    e-mail               : joris.felzines@insa-lyon.fr - guillaume.mantzarides@insa-lyon.fr
*******************************************************************************************/
 
//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------------
#if ! defined ( Trajet_H )
#define Trajet_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Trajet>
// Trajet contient un départ et une arrivée sous forme de tableaux 
// de char.
//------------------------------------------------------------------------

class Trajet
{
//----------------------------------------------------------------- PUBLIC

public: 
//----------------------------------------------------- Méthodes publiques

    virtual void Afficher ();
    // Mode d'emploi :
    // Affiche le départ et l'arrivée du trajet.
    //
    // Contrat :
    // Le départ et l'arrivée existent.
    
    bool Correspond ( char * un_depart, char * une_arrivee );
    // Mode d'emploi :
    // Prend deux pointeurs vers des tableaux de char en paramètre et les 
    // compare avec les attributs de la classe : renvoie true si ils 
    // correspondent, et false sinon.
    //
    // Contrat :
    // un_depart et une_arrivee pointent bien vers des tableaux de char.

//-------------------------------------------- Constructeurs - destructeur

    Trajet ( char * un_depart, char * un_arrivee );
    // Mode d'emploi :
    // Prend deux pointeurs vers des tableaux de char en paramètres et copie
    // leur contenu dans des tableaux correspondants aux attributs du trajet.
    //
    // Contrat :
    // un_depart et une_arrivee pointent bien vers des tableaux de char.

    virtual ~Trajet ( );
    // Mode d'emploi :
    // Détruit les tableaux correspondants aux attributs (depart et arrivee).
    //
    // Contrat :
    // Ne prend pas de paramètres.

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    char * depart;
    char * arrivee;
};

//-------------------------------- Autres définitions dépendantes de <Trajet>

#endif // Trajet_H

