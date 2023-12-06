/******************************************************************************************
                           Trajet_simple  -  Classe descendante de <Trajet>
                             -------------------
    début                : 11/2023
    copyright            : (C) 11/2023 par Joris FELZINES - Guillaume MANTZARIDES
    e-mail               : joris.felzines@insa-lyon.fr - guillaume.mantzarides@insa-lyon.fr
*******************************************************************************************/

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

void Trajet_simple::Afficher ( ) const
{
    cout << "Simple" << endl;
    cout << "   De " << depart << " à " << arrivee << " en " << transport << endl;
}

//-------------------------------------------- Constructeurs - destructeur
Trajet_simple::Trajet_simple ( char * un_depart, char * une_arrivee, char * un_transport ) : Trajet (un_depart, une_arrivee)
{
    #ifdef MAP
        cout << "Appel au constructeur de <Trajet_simple>" << endl;
    #endif
    transport = new char[20];
    strcpy(transport, un_transport);
} //----- Fin de Trajet_simple


Trajet_simple::~Trajet_simple ( )
{
    #ifdef MAP
        cout << "Appel au destructeur de <Trajet_simple>" << endl;
    #endif
    delete [] transport;
} //----- Fin de ~Trajet_simple


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
