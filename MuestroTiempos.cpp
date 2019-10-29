#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
void MuestroTiempos(string Pilotos[15], int Tiempos[15][3]) {
	int Ind;
	cout<<"\t"<<"********** TIEMPOS DEFINITIVOS **********"<<endl<<endl;
	
	cout<<"Los tiempos totales (vuelta + penalizacion) de cada piloto fueron:"<<endl;
	for (Ind=0;Ind<=14;Ind++){
		cout<<Pilotos[Ind]<<" --------> "<<Tiempos [Ind][2]<<endl;
	}
	cout<<endl;
}

