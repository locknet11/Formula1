#include <iostream>
#include <string>
using namespace std;
void InicializoPos(int Posiciones[15][7]) {
	int fil, col;
	//Utilizo una estructura repetitiva para recorrer la variable dimensionada
	for (fil=0;fil<15;fil++){
		for (col=0;col<7;col++){
			Posiciones[fil][col]=0;
		}
	}
}