#include <iostream>
#include <cstring>
using namespace std;

#include "Trajet.h"
#include "Trajet_simple.h"
#include "Trajet_compose.h"
#include "LC.h"
#include "Maillon.h"

int main ()
{
    LC * catalogue_trajets = new LC();
    bool actif = 1; 
    while (actif)
    {
        char reponse;
        cout << "Liste des commandes" << endl;
        cout << "1 : Créer nouveau trajet" << endl;
        cout << "2 : Chercher un trajet" << endl;
        cout << "3 : Afficher catalogue des trajets" << endl;
        cout << "4 : Quitter l'application" << endl;
        cin >> reponse;
        switch (reponse)
        {
        case '1':
            {int type;
            cout << "1 : Simple" << endl;
            cout << "2 : Compose" << endl;
            cin >> type;
            if (type == 1)
            {
                cout << "Donnez point de départ" << endl;
                char * depart = new char[20]; 
                cin >> depart;
                cout << "Donnez point d'arrivée" << endl;
                char * arrivee = new char[20]; 
                cin >> arrivee;
                cout << "Donnez moyen de transport" << endl;
                char * transport = new char[20]; 
                cin >> transport;

                Trajet_simple * new_trajet = new Trajet_simple(depart, arrivee, transport);
                catalogue_trajets->Ajouter_queue(new_trajet);
            }
            else if (type == 2)
            {
                bool actif = 1;
                int compteur = 0;
                LC * liste_escales_tmp = new LC(); 
                char * true_depart;
                char * true_arrivee;
                cout << "Donnez point de départ" << endl;     
                char * depart = new char[20];
                cin >> depart;
                true_depart = depart;
                while (actif)
                {
                    cout << "Donnez l'escale suivante (ou l'arrivée si il n'y a pas d'autres escales)." << endl;
                    char * arrivee = new char[20]; 
                    cin >> arrivee;
                    cout << "Donnez le moyen de transport" << endl;
                    char * transport = new char[20];
                    cin >> transport;

                    Trajet_simple * new_trajet = new Trajet_simple(depart, arrivee, transport);
                    liste_escales_tmp->Ajouter_queue(new_trajet);

                    cout << "Si vous ne souhaitez pas rajouter une escale, tapez 0, sinon tapez 1" << endl;
                    cin >> actif;
                    if (actif == 0) true_arrivee = arrivee;
                    ++compteur;
                    depart = arrivee;
                }
                Trajet_compose * new_trajet = new Trajet_compose(true_depart, true_arrivee, liste_escales_tmp);
                catalogue_trajets->Ajouter_queue(new_trajet);
            }
            break;}

        case '2':
            {cout << "Donnez point de départ" << endl;
            char * depart = new char[20];          
            cin >> depart;
            cout << "Donnez point d'arrivée" << endl;
            char * arrivee = new char[20]; 
            cin >> arrivee;
            catalogue_trajets->Recherche(depart, arrivee);
            delete [] depart;
            delete [] arrivee;
         break;}

        case '3':
            {
                cout << endl;
                catalogue_trajets->Afficher_liste();
                cout << endl;
            break;}

        case '4':
            {delete catalogue_trajets;
            cout << "Au revoir !" << endl;
            goto fin_app;
            break;}
        
        default:
            {cout << endl << "Veuillez choisir une option valide." << endl;
            break;}
        }
    }
    fin_app : 
    return 0;
}