/******************************************************************************************
                           LC  -  Classe implémentant une liste chaînée 
                             -------------------
    début                : 11/2023
    copyright            : (C) 11/2023 par Joris FELZINES - Guillaume MANTZARIDES
    e-mail               : joris.felzines@insa-lyon.fr - guillaume.mantzarides@insa-lyon.fr
*******************************************************************************************/

//---------- Réalisation de la classe <LC> (fichier LC.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "LC.h"

//------------------------------------------------------------- Constantes
 
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void LC::Ajouter_queue (Trajet * un_trajet)
{
    Maillon * new_maillon = new Maillon(un_trajet);
    if (taille == 0)
    {
        ptr_fin = new_maillon;
        ptr_deb = ptr_fin;
    } 
    else
    {
        ptr_fin->Set_next(new_maillon);
        ptr_fin = new_maillon;
    } 
    ++taille;
}

void LC::Afficher_liste ( ) const
{
    Maillon * tmp = ptr_deb;
    int compteur = 1;
    while (tmp != NULL)
    {
        cout << compteur << " : ";
        tmp->Get_trajet()->Afficher();
        tmp = tmp->Get_next();
        compteur++;
    }
}

void LC::Recherche (const char * un_depart, const char * une_arrivee) const
{
    Maillon * courant = ptr_deb;
    cout << "Liste des trajets correspondants :" << endl;
    cout << endl;
    while (courant != NULL)
    {
        if (courant->Get_trajet()->Correspond(un_depart, une_arrivee))
        {
            courant->Get_trajet()->Afficher();
        }
        courant = courant->Get_next();
    }
    cout << endl;
}

//-------------------------------------------- Constructeurs - destructeur
LC::LC ( )
{
    #ifdef MAP
        cout << "Appel au constructeur par défaut de <LC>" << endl;
    #endif
} //----- Fin de LC (constructeur par défaut)

LC::~LC ( )
{
    #ifdef MAP
        cout << "Appel au destructeur de <LC>" << endl;
    #endif
    
    delete ptr_deb;
} //----- Fin de ~LC


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
