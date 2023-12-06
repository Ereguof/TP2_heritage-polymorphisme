/******************************************************************************************
                           Trajet  -  Classe implémentant un trajet
                             -------------------
    début                : 11/2023
    copyright            : (C) 11/2023 par Joris FELZINES - Guillaume MANTZARIDES
    e-mail               : joris.felzines@insa-lyon.fr - guillaume.mantzarides@insa-lyon.fr
*******************************************************************************************/

//---------- Réalisation de la classe <Trajet> (fichier Trajet.cpp) ------------

//---------------------------------------------------------------- INCLUDE 

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Trajet.h"

//------------------------------------------------------------- Constantes
 
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void Trajet::Afficher ( ) const
{
    cout << "\n" << "De " << depart << " à " << arrivee;
}

bool Trajet::Correspond ( const char * un_depart, const char * une_arrivee ) const
{
    bool result = false;
    if (strcmp(depart, un_depart) == 0 && strcmp(arrivee, une_arrivee) == 0)
    {
        result = true;
    }
    return result;
}

//-------------------------------------------- Constructeurs - destructeur

Trajet::Trajet ( char * un_depart, char * une_arrivee )
{
    #ifdef MAP
        cout << "Appel au constructeur de <Trajet>" << endl;
    #endif
    depart = new char[20];
    strcpy(depart, un_depart);
    arrivee = new char[20];
    strcpy(arrivee, une_arrivee);
} //----- Fin de Trajet


Trajet::~Trajet ( )
{
    #ifdef MAP
        cout << "Appel au destructeur de <Trajet>" << endl;
    #endif
    delete [] depart;
    delete [] arrivee;
} //----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
