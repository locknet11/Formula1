#include <iostream>
#include <string>
using namespace std;
bool esRepetido(std::string array[15], std::string palabra) {
	for (size_t i = 0; i < 15; i++)
	{
		if (array[i]== palabra) {
			return true;
		}
	}
	return false;
}

void CargarPilotos(string Pilotos[15]) {
	string ingreso="";
	int contador = 0;
	do {
		cout << "-Ingrese nombre del piloto " << contador+1 << "\n";
		cin >> ingreso;
		if (ingreso != " " && ingreso!= "") {
			cout << "   Registrado\n\n";
			if (esRepetido(Pilotos, ingreso)) {
				cout << " Ya existe este nombre\n";
				continue;
			}
			else {
				Pilotos[contador] = ingreso;
				contador++;
			}
		}
	} while (contador < 15);

}

	//int Ind;
	// Utilizo una estructura repetitiva para recorrer la variable dimensionada
	//for (Ind=0;Ind<=14;Ind++){
		//do {
			//cout<<"Ingrese nombre del Piloto n°: "<<Ind+1<<": ";
			//cin>>Pilotos[Ind];
		//} while (Pilotos[Ind]==" ");
	//}
//}