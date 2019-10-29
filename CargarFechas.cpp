#include <iostream>
#include <string>
using namespace std;

bool buscarRepetidos(int FechasC[8][2], int& index){
	for(int j=0;j<8;j++){
		
		
		if(FechasC[index][1]==FechasC[j][1] && FechasC[index][0]==FechasC[j][0] && index!=j){
			cout<<"\t"<<"*** En esta fecha ya se ha programado una carrera ***"<<endl<<endl;
			index=index-1;
			return true;
		}else{}
	}
}

void CargarFechas(int FechasC[8][2]) {
	int Ind;
	bool repetido=false;
	// Utilizo una estructura repetitiva para recorrer la variable dimensionada
	cout<<"\t"<<"********** CARGA DE FECHAS **********"<<endl<<endl;
	for (Ind=0;Ind<=7;Ind++){
        do{
            do {
                cout<<"Ingrese el mes de la carrera numero: "<<Ind+1<<": ";
                cin>>FechasC[Ind][1];
                if(FechasC[Ind][1]<=2){
                    cout<<"No hay carreras en Enero y Febrero por vacaciones"<<endl<<endl;
                }
				if(FechasC[Ind][1]>12){
					cout<<"\t"<<"*** Ingrese un mes valido ***"<<endl<<endl;
				}
            } while (FechasC[Ind][1]<=2||FechasC[Ind][1]>12);
                if (FechasC[Ind][1]==3||FechasC[Ind][1]==5||FechasC[Ind][1]==7 || FechasC[Ind][1]==8||
                    FechasC[Ind][1]==10 || FechasC[Ind][1]==12){
                        do {
                            cout<<"Ingrese el dia de la carrera numero "<<Ind+1<<": ";
                            cin>>FechasC[Ind][0];cout<<endl;
							
							if(FechasC[Ind][0]<=0 || FechasC [Ind][0]>31){
								cout<<"\t""*** Ingrese un dia valido ***"<<endl<<endl;
							}
							
                        } while (FechasC[Ind][0]<=0 || FechasC [Ind][0]>31);
			}else {
                do {
                    cout<<"Ingrese el dia de la carrera numero "<<Ind+1<<": ";
                    cin>>FechasC[Ind][0];cout<<endl;
					if(FechasC[Ind][0]<=0 || FechasC [Ind][0]>30){
						cout<<"\t""*** Este mes solo tiene 30 dias ***"<<endl<<endl;
					}
					
                } while (FechasC[Ind][0]<=0 || FechasC [Ind][0]>30);
            }
		buscarRepetidos(FechasC, Ind);
						
		}while(repetido);
	}
}


