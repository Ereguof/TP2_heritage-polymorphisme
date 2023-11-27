trajets: trajets.o Trajet.o Trajet_simple.o Trajet_compose.o Maillon.o LC.o
		g++ -o trajets trajets.o Trajet.o Trajet_simple.o Trajet_compose.o Maillon.o LC.o -ansi -pedantic -Wall -std=c++11 

trajets.o: trajets.cpp
		g++ -c trajets.cpp -ansi -pedantic -Wall -std=c++11 -DMAP

Trajet.o: Trajet.cpp 
		g++ -c Trajet.cpp -ansi -pedantic -Wall -std=c++11 -DMAP

Trajet_simple.o: Trajet_simple.cpp
		g++ -c Trajet_simple.cpp -ansi -pedantic -Wall -std=c++11 -DMAP

Trajet_compose.o: Trajet_compose.cpp
		g++ -c Trajet_compose.cpp -ansi -pedantic -Wall -std=c++11 -DMAP

Maillon.o: Maillon.cpp
		g++ -c Maillon.cpp -ansi -pedantic -Wall -std=c++11 -DMAP

LC.o: LC.cpp
		g++ -c LC.cpp -ansi -pedantic -Wall -std=c++11 -DMAP