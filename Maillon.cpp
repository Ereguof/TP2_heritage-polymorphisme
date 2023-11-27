/************************************************************************* 
                           Maillon  -  description 
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Maillon> (fichier Maillon.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Maillon.h"

//------------------------------------------------------------- Constantes
 
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Maillon::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Maillon::Set_next( Maillon * un_next )
{
    next = un_next;
}

Maillon * Maillon::Get_next( ) 
{
    return next;
}

Trajet * Maillon::Get_trajet( ) 
{
    return trajet;
}

//-------------------------------------------- Constructeurs - destructeur
Maillon::Maillon ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur par défaut de <Maillon>" << endl;
#endif
} //----- Fin de Maillon (constructeur par défaut)

Maillon::Maillon ( Trajet * un_trajet ) : trajet (un_trajet), next(NULL)
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au constructeur de <Maillon>" << endl;
    #endif

} //----- Fin de Maillon


Maillon::~Maillon ( )
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au destructeur de <Maillon>" << endl;
    #endif
    delete(trajet);
    if (next != NULL)
    {
        delete next;
    }
} //----- Fin de ~Maillon


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
