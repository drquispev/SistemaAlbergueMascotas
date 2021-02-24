#ifndef Postulante_H
#define Postulante_H

#include<iostream>
using namespace std;
#include<string>

class Postulante
{
	private:
		char codigo[4];
		char nombres[20];
		char apellidos[20];
		char dni[9];
		char direccion[15];
		int edad;
		char telefono[10];
		int nmascotas;
	public:
		Postulante(char c, char n, char a, char d, char dir, int e,char t);
};

#endif
