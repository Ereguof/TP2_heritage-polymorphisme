FLAGS = -ansi -pedantic -Wall -std=c++11 -DMAP
OBJ = trajets.o Trajet.o Trajet_simple.o Trajet_compose.o Maillon.o LC.o

trajets: $(OBJ)
		g++ -o trajets $(OBJ) $(FLAGS)

trajets.o: trajets.cpp
		g++ -c trajets.cpp $(FLAGS)

Trajet.o: Trajet.cpp 
		g++ -c Trajet.cpp $(FLAGS)

Trajet_simple.o: Trajet_simple.cpp
		g++ -c Trajet_simple.cpp $(FLAGS)

Trajet_compose.o: Trajet_compose.cpp
		g++ -c Trajet_compose.cpp $(FLAGS)

Maillon.o: Maillon.cpp
		g++ -c Maillon.cpp $(FLAGS)

LC.o: LC.cpp
		g++ -c LC.cpp $(FLAGS)