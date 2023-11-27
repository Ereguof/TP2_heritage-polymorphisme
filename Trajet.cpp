/************************************************************************* 
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

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
// type Trajet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void Trajet::Afficher ()
{
    cout << "\n" << "De " << depart << " à " << arrivee;
}

bool Trajet::Correspond ( char * un_depart, char * une_arrivee )
{
    bool result = false;
    if (strcmp(depart, un_depart) == 0 && strcmp(arrivee, une_arrivee) == 0)
    {
        result = true;
    }
    return result;
}

//-------------------------------------------- Constructeurs - destructeur
Trajet::Trajet ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur par défaut de <Trajet>" << endl;
#endif
} //----- Fin de Trajet (constructeur par défaut)

Trajet::Trajet ( char * un_depart, char * une_arrivee ) : depart (un_depart), arrivee (une_arrivee)
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au constructeur de <Trajet>" << endl;
    #endif
} //----- Fin de Trajet


Trajet::~Trajet ( )
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au destructeur de <Trajet>" << endl;
    #endif
} //----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
