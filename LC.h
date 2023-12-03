/******************************************************************************************
                           LC  -  Classe implémentant une liste chaînée 
                             -------------------
    début                : 11/2023
    copyright            : (C) 11/2023 par Joris FELZINES - Guillaume MANTZARIDES
    e-mail               : joris.felzines@insa-lyon.fr - guillaume.mantzarides@insa-lyon.fr
*******************************************************************************************/

//---------- Interface de la classe <LC> (fichier LC.h) ----------------
#if ! defined ( LC_H )
#define LC_H

//--------------------------------------------------- Interfaces utilisées
#include "Maillon.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <LC>
// Permet l'implémentation d'une liste chaînée permettant d'ajouter des 
// maillons, d'afficher leur contenu et effectuer des recherches.
//------------------------------------------------------------------------

class LC
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    void Ajouter_queue (Trajet * un_trajet);
    // Mode d'emploi :
    // Prend en paramètre un pointeur vers une zone mémoire contenant un trajet,
    // crée un nouveau maillon pour lui et update la taille de la chaine.
    //
    // Contrat :
    // Le trajet pointé est effectivement présent en memoire.

    void Afficher_liste ( );
    // Mode d'emploi :
    // Affiche les contenus de tout les maillons.
    //
    // Contrat :
    // Une liste vide n'affiche rien.

    void Recherche ( char * un_depart, char * une_arrivee);
    // Mode d'emploi :
    // Prend en paramètre deux tableaux de char et les compare aux attributs de chaque
    // maillon. Si le départ et l'arrivée du trajet contenu par le maillon correspondent,
    // la fonction les affiche.
    //
    // Contrat :
    // Les pointeurs visent des cases mémoires contenant le départ et l'arrivée sous forme 
    // de tableaux de char.

//-------------------------------------------- Constructeurs - destructeur
    LC ( );
    // Mode d'emploi (constructeur par défaut) :
    // Initialisation classique.
    //
    // Contrat :
    // Ne prend pas de paramètres.

    virtual ~LC ( );
    // Mode d'emploi :
    // Delete le premier maillon de la chaîne, tout les maillons suivants seront 
    // détruits en cascade dans le destructeur de maillon.
    // 
    // Contrat :
    // ptr_deb vise bien le premier maillon.
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

