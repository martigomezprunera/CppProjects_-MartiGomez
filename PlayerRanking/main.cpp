#include <vector>
#include <stdio.h>
#include <map>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>

//Estructura Player
struct Player
{
	std::string name;
	int points;
};

void main()
{
	int puntuacion_user;
	int counter = 0;
	std::string nombre_user;

	//Inicializamos vector vacio
	std::vector <int> ranking_vector;

	//Inicilaizamos el mapa vacio
	std::map<int, Player>ranking_map;
	ranking_map[1] = { "Marti", 2000 };
	ranking_map[2] = {"Edu", 1999};
	ranking_map[3] = {"Pedro Pedrin", 1989};
	ranking_map[4] = {"Kokesand", 1979};

	//Datos por el usuario
	std::cout << "Nombre: " << std::endl;
	std::cin >> nombre_user;
	std::cout << "Puntuacion: " << std::endl;
	std::cin >> puntuacion_user;

	// Iterador al principio del mapa
	std::map<int, Player>::iterator it = ranking_map.begin();

	//Creamos auxiliar
	std::map<int, Player>ranking_map_aux;
	ranking_map_aux[1] = { nombre_user, puntuacion_user };

	//Introducimos nuevo jugador
	//Comparamos el nuevo dato con los antiguos
	while (it != ranking_map.end())
	{
		if (ranking_map_aux[1] != ranking_map[it])
		{
			counter++;
		}
		it++;
	}

	//ranking_map[5] = {nombre_user, puntuacion_user};



}