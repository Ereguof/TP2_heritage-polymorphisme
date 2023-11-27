/*************************************************************************
                           Trajet_compose  -  description
                             -------------------
    début                : $DATE$ 
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Trajet_compose> (fichier Trajet_compose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Trajet_compose.h"

//------------------------------------------------------------- Constantes 

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Trajet_compose::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Trajet_compose::Afficher ( )
{
    cout << "Compose" << "\n" << "{" << endl;
    liste_escales->Afficher_liste();
    cout << "}" << endl;
}

//-------------------------------------------- Constructeurs - destructeur
Trajet_compose::Trajet_compose ( char * un_depart, char * une_arrivee, LC * une_liste_escales ) : Trajet(un_depart, une_arrivee), liste_escales (une_liste_escales)
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au constructeur de <Trajet_compose>" << endl;
    #endif
} //----- Fin de Trajet_compose


Trajet_compose::~Trajet_compose ( )
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au destructeur de <Trajet_compose>" << endl;
    #endif
    delete liste_escales;
} //----- Fin de ~Trajet_compose


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
