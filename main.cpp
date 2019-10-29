#include<iostream>
#include "Cabecera.h"
#include <string>

using namespace std;


int main (int argc, char *argv[]) {
	//PROGRAMA PRINCIPAL
		string Pilotos[15]; int Puntos[6]; int FechasC[8][2]; int Tiempos[15][3]; int Posiciones[15][7];
		
		//llamada a procedimiento para realizar la carga de los datos
			cout<<"	shhyyyyyyyy`                                                      hy.                 oyyyho`"<<endl;                             
			cout<<"	dM+-------.                                                       MN-                     NM:"<<endl;                             
			cout<<"	dM:         -hms++++smh. .dNhyso .NmossshNmsyssshNs  yM/     +M+  MN- :oooooydNm.         mM/"<<endl;                             
			cout<<"	dMhsssssss/ hM/      /My :Md     .Nm`    yMs    `dN` yM+     oM+  MN-    ./yhydMo         mM/"<<endl;                             
			cout<<"	dMo:::::::-`dM.      -Md :Md     .Nd     sMs     dN. yM+     oM+  MN- `+yhs:` yMo         mM/"<<endl;                             
			cout<<"	dM-         hM:      :My :Md     .Nd     sMs     dN. yM+     oM+  MN-`dN/`    yMo         mM/"<<endl;                             
			cout<<"	dM-         :md+////+dd- :Mh     .Nd     sMs     dN. :mdsoooohM+  NN-`mNyoooo+dMo    `+oo+NMyoo+"<<endl;                         
			cout<<"	dM           `/ooooo+:`  :Mh     .Nd     :+-     dN.   +++++++-   ++` .:++++++++-    `++++++++++"<<endl;                 
		cout<<endl<<endl<<endl;	
		cout<<"\t"<<"\t"<<"\t""***************************************************************"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" CAMPEONATO FORMULA 1"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"***************************************************************"<<endl;
		cout<<endl<<endl;
		CargarPilotos(Pilotos);
		CargarPuntos(Puntos);
		CargarFechas(FechasC);
		CargarTiempos(Pilotos, Tiempos);
		cout<<endl;
		//llamada a procedimiento para inicializar la tabla de posiciones
		InicializoPos(Posiciones);
		cout<<endl;
		//muestro resultados
		MuestroTiempos(Pilotos,Tiempos);
		cout<<endl;
		//generarTablaPosiciones(Pilotos,Puntos,Tiempos);
		cout<<"\t"<<" *** Presione ENTER para ver las tablas de posiciones *** "<<endl<<endl;
		cin.ignore();
		cin.get();
		
		generarTablaPosiciones(Pilotos, Puntos, Tiempos);
		
		
		return 0;
		
	return 0;
}

