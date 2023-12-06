/******************************************************************************************
                           Trajet_simple  -  Classe descendante de <Trajet>
                             -------------------
    début                : 11/2023
    copyright            : (C) 11/2023 par Joris FELZINES - Guillaume MANTZARIDES
    e-mail               : joris.felzines@insa-lyon.fr - guillaume.mantzarides@insa-lyon.fr
*******************************************************************************************/

//---------- Interface de la classe <Trajet_simple> (fichier Trajet_simple.h) ----------------
#if ! defined ( Trajet_simple_H )
#define Trajet_simple_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Trajet_simple>
// Descendante de <Trajet> qui ajoute le type de transport pour aller d'un
// point A à un point B.
//------------------------------------------------------------------------

class Trajet_simple : public Trajet
{
//----------------------------------------------------------------- PUBLIC
 
public:
//----------------------------------------------------- Méthodes publiques

    void Afficher ( ) const;
    // Mode d'emploi :
    // Affiche le depart, l'arrivée et le mode de transport du trajet.
    //
    // Contrat :
    // Le transport, le départ et l'arrivée existent.

//-------------------------------------------- Constructeurs - destructeur
    Trajet_simple ( char * un_depart, char * une_arrivee, char * un_transport );
    // Mode d'emploi :
    // Fait appel au constructeur de <Trajet> pour le départ et l'arrivée, et 
    // copie le contenu pointé par un_transport dans l'attribut de la classe.
    //
    // Contrat :
    // Les trois tableaux de char pointés par les paramètres existent.

    virtual ~Trajet_simple ( );
    // Mode d'emploi :
    // Détruit le tableau correspondant à l'attribut transport.
    //
    // Contrat :
    // Ne prend pas de paramètres.


//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    char * transport;
};

//-------------------------------- Autres définitions dépendantes de <Trajet_simple>

#endif // Trajet_simple_H
