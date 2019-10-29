#include<iostream>
#include <string>
using namespace std;
#ifndef CABECERA_H
#define CABECERA_H
void CargarPilotos(string Pilotos[15]);
void CargarPuntos(int Puntos[6]);
void CargarFechas(int FechasC[8][2]);
void CargarTiempos (string Pilotos [15], int Tiempos[15][3]);
void InicializoPos(int Posiciones[15][7]);
void MuestroTiempos(string Pilotos[15], int Tiempos[15][3]);
void generarTablaPosiciones(string Pilotos[15], int Puntos[6], int Tiempos[15][3]);
#endif
