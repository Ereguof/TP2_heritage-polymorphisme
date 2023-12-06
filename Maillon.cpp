/******************************************************************************************
                           Maillon  -  Classe implémentant un maillon de liste chaînée <LC>
                             -------------------
    début                : 11/2023
    copyright            : (C) 11/2023 par Joris FELZINES - Guillaume MANTZARIDES
    e-mail               : joris.felzines@insa-lyon.fr - guillaume.mantzarides@insa-lyon.fr
*******************************************************************************************/

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

void Maillon::Set_next( Maillon * un_next )
{
    next = un_next;
}

Maillon * Maillon::Get_next( ) const
{
    return next;
}

Trajet * Maillon::Get_trajet( ) const
{
    return trajet;
}

//-------------------------------------------- Constructeurs - destructeur

Maillon::Maillon ( Trajet * un_trajet ) : trajet (un_trajet), next(NULL)
{
    #ifdef MAP
        cout << "Appel au constructeur de <Maillon>" << endl;
    #endif

} //----- Fin de Maillon (constructeur avec paramètre)


Maillon::~Maillon ( )
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
