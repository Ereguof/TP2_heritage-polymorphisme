/*************************************************************************
                           Trajet_simple  -  description 
                             ------------------- 
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Trajet_simple> (fichier Trajet_simple.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Trajet_simple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Trajet_simple::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Trajet_simple::Afficher ( )
{
    cout << "Simple" << endl;
    cout << "   De " << depart << " à " << arrivee << " en " << transport << endl;
}

//-------------------------------------------- Constructeurs - destructeur
Trajet_simple::Trajet_simple ( char * un_depart, char * une_arrivee, char * un_transport ) : Trajet (un_depart, une_arrivee), transport(un_transport)
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au constructeur de <Trajet_simple>" << endl;
    #endif
} //----- Fin de Trajet_simple


Trajet_simple::~Trajet_simple ( )
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au destructeur de <Trajet_simple>" << endl;
    #endif
    delete [] transport;
    delete [] depart;
    delete [] arrivee;
} //----- Fin de ~Trajet_simple


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
