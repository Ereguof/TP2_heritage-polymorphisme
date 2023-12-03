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
    LC * catalogue_trajets = new LC();  // création du catalogue
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
            cout << "1 : Simple" << endl;   // choix du type de trajet
            cout << "2 : Compose" << endl;
            cin >> type;
            if (type == 1)
            {
                cout << "Donnez point de départ" << endl;   // création de 3 tableau de char temporaires dont le contenu sera copié dans les attributs des trajets
                char depart[20];
                cin >> depart;
                cout << "Donnez point d'arrivée" << endl;
                char arrivee[20]; 
                cin >> arrivee;
                cout << "Donnez moyen de transport" << endl;
                char transport[20]; 
                cin >> transport;

                Trajet_simple * new_trajet = new Trajet_simple(depart, arrivee, transport);     // création du trajet simple et ajout au catalogue
                catalogue_trajets->Ajouter_queue(new_trajet);
            }
            else if (type == 2)
            {
                bool actif = 1;     // permet de savoir si une escale supplémentaire doit être ajoutée   
                LC * liste_escales_tmp = new LC();  // initialisation de la liste d'escale à attribuer au trajet composé
                char true_depart[20];   // permet de garder en mémoire le tout premier départ et la dernière escale
                char true_arrivee[20];
                cout << "Donnez point de départ" << endl;     
                char depart[20]; 
                cin >> depart;
                strcpy(true_depart, depart);
                while (actif)
                {
                    cout << "Donnez l'escale suivante (ou l'arrivée si il n'y a pas d'autres escales)." << endl;
                    char arrivee[20]; 
                    cin >> arrivee;
                    cout << "Donnez le moyen de transport" << endl;
                    char transport[20]; 
                    cin >> transport;

                    Trajet_simple * new_trajet = new Trajet_simple(depart, arrivee, transport); // création d'un trajet simple et ajout à la liste d'escales
                    liste_escales_tmp->Ajouter_queue(new_trajet);

                    cout << "Si vous ne souhaitez pas rajouter une escale, tapez 0, sinon tapez 1" << endl;
                    cin >> actif;
                    if (actif == 0) strcpy(true_arrivee, arrivee);
                    strcpy(depart, arrivee);    // l'arrivée de l'escale précédente est le départ de l'escale suivante
                }
                Trajet_compose * new_trajet = new Trajet_compose(true_depart, true_arrivee, liste_escales_tmp); // création du trajet composé et ajout au catalogue
                catalogue_trajets->Ajouter_queue(new_trajet);
            }
            break;}

        case '2':
            {cout << "Donnez point de départ" << endl;
            char depart[20];          
            cin >> depart;
            cout << "Donnez point d'arrivée" << endl;
            char arrivee[20]; 
            cin >> arrivee;
            catalogue_trajets->Recherche(depart, arrivee);  // renvoie tout les trajets correspondants (recherche simple)
         break;}

        case '3':
            {
                cout << endl;
                catalogue_trajets->Afficher_liste();    
                cout << endl;
            break;}

        case '4':
            {delete catalogue_trajets;  // la destruction du catalogue implique la destruction en cascade de tous les trajets et maillons
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