/******************************************************************************************
                           Maillon  -  Classe implémentant un maillon de liste chaînée <LC>
                             -------------------
    début                : 11/2023
    copyright            : (C) 11/2023 par Joris FELZINES - Guillaume MANTZARIDES
    e-mail               : joris.felzines@insa-lyon.fr - guillaume.mantzarides@insa-lyon.fr
*******************************************************************************************/

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
// Maillon de liste chaînée <LC> contenant un pointeur vers un trajet 
// et un pointeur vers le maillon suivant.
//------------------------------------------------------------------------

class Maillon
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    void Set_next( Maillon * un_next );
    // Mode d'emploi :
    // Permet d'affecter à l'attribut next le maillon suivant.
    // 
    // Contrat :
    // Le maillon pointé par un_next existe.

    Maillon * Get_next( ) const;
    // Mode d'emploi :
    // Renvoie un pointeur vers le maillon suivant.
    //
    // Contrat :
    // Si c'est le dernier maillon de la chaîne, renvoie NULL.

    Trajet * Get_trajet( ) const;
    // Mode d'emploi :
    // Renvoie un pointeur vers le trajet contenu par le maillon.
    //
    // Contrat :
    // Maillon possède bien un trajet.

//-------------------------------------------- Constructeurs - destructeur

    Maillon ( Trajet * trajet );
    // Mode d'emploi :
    // Prend en paramètre un pointeur vers un trajet existant, qui devient 
    // alors le trajet du maillon.
    // 
    // Contrat :
    // trajet pointe bien vers un trajet existant.

    virtual ~Maillon ( );
    // Mode d'emploi :
    // Détruit le trajet contenu par le maillon et le maillon suivant.
    // 
    // Contrat :
    // Maillon possède bien un trajet.
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    Trajet * trajet;
    Maillon * next = NULL;
};

//-------------------------------- Autres définitions dépendantes de <Maillon>

#endif // Maillon_H

