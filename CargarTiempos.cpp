#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
void CargarTiempos (string Pilotos [15], int Tiempos[15][3]){
	int pil;
	//Utilizo una estructura repetitiva para recorrer la variable dimensionada
	for(pil=0;pil<=14;pil++){
		cout<<"Ingrese los segundos utilizados del piloto nro."<<pil+1<<": ";
		do {
			cin>>Tiempos[pil][0];
		}while (Tiempos[pil][0]<=0) ;
		cout<<"Ingrese los segundos penalizados del piloto nro."<<pil+1<<": ";
		do {
			cin>>Tiempos[pil][1];
		} while (Tiempos[pil][1]<0);
		Tiempos[pil][2]=Tiempos[pil][0]+Tiempos[pil][1];
	}
}
