/******************************************************************************************
                           Trajet_compose  -  Classe descendante de <Trajet>
                             -------------------
    début                : 11/2023
    copyright            : (C) 11/2023 par Joris FELZINES - Guillaume MANTZARIDES
    e-mail               : joris.felzines@insa-lyon.fr - guillaume.mantzarides@insa-lyon.fr
*******************************************************************************************/

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
// Classe permettant d'implémenter un trajet contenant plusieurs escales
// sous la forme d'une liste chaînée de trajets simples : l'arrivée d'un 
// trajet simple est le depart du suivant.
//------------------------------------------------------------------------

class Trajet_compose : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    void Afficher ( ) const;
    // Mode d'emploi :
    // Affiche toutes les escales du trajet.
    //
    // Contrat :
    // La liste d'escales est bien initialisée.

//-------------------------------------------- Constructeurs - destructeur
    Trajet_compose ( char * un_depart, char * une_arrivee, LC * une_liste_escales); 
    // Mode d'emploi :
    // Fait appel au constructeur de <Trajet> pour le départ et l'arrivée, et 
    // copie une_liste_escales dans l'attribut de la classe.
    //
    // Contrat :
    // La liste chaînée contenant les escales existe, tout comme les deux 
    // tableaux de char.

    virtual ~Trajet_compose ( );
    // Mode d'emploi :
    // Détruit la liste chaînée pointée par liste_escales.
    //
    // Contrat :
    // liste_escales existe.

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    LC * liste_escales;
};

//-------------------------------- Autres définitions dépendantes de <Trajet_compose>

#endif // Trajet_compose_H
