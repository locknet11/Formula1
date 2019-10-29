#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void generarTablaPosiciones(string Pilotos[15], int Puntos[6], int Tiempos[15][3]){
	int tabla [15][2];
	int i, j;
	cout<<"\t"<<"********** TABLA DE POSICIONES **********"<<endl<<endl;
	for(int i = 0; i < 15;i++){
		tabla[i][0]=i;
		tabla[i][1]= Tiempos[i][2];
		cout<<i+1<<") ---> "<<"Piloto: "<<Pilotos[i]<<", tiempo total: "<<tabla[i][1]<<"\n";
	}
	
	
	
}
