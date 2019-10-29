// Formula1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "Externo.h"

bool esRepetido(std::string array[15], std::string palabra) {
	for (size_t i = 0; i < 15; i++)
	{
		if (array[i]== palabra) {
				return true;
		}
	}
	return false;
}
void ingresarNombre(std::string array[15]) {
	std::string ingreso="";
	int contador = 0;
	do {
		std::cout << "Ingrese nombre del piloto " << contador << "\n";
		std::cin >> ingreso;
		if (ingreso != " " && ingreso!= "") {
			std::cout << "no esta vacio\n";
			if (esRepetido(array, ingreso)) {
				std::cout << " se repite\n";
				continue;
			}
			else {
				array[contador] = ingreso;
				contador++;
			}
		}
	} while (contador < 15);
	imprimirTodos(array);
}


int main()
{
	std::string Pilotos[15];
	int i = 0;
	ingresarNombre(Pilotos);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

