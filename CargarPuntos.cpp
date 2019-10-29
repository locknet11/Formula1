#include <iostream>
#include <string>
using namespace std;
void CargarPuntos(int Puntos[6]){
	
	int i;
	cout<<"\t"<<"************** CARGA DE PUNTOS ***************"<<endl<<endl;
	cout<<"Por favor ingrese los puntos de manera DECRECIENTE"<<endl<<endl;
	
	cout<<"Ingrese los puntos de la posicion 1: ";
	cin>>Puntos[0];cout<<endl;
	
	for(i=1;i<6;i++){
		
		do{
			cout<<"Ingrese los puntos de la posicion "<<i+1<<" : ";
			cin>>Puntos[i];cout<<endl;
			
			if(Puntos[i]>Puntos[i-1]){
				cout<<"\t"<<"*** Debe ingresar un valor igual o inferior a ("<<Puntos[i-1]<<") ***"<<endl<<endl;
			}
			
		}while(Puntos[i]>Puntos[i-1] or Puntos[i]==0);
		
	}
}


