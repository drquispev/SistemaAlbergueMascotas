#ifndef Postulante_H
#define Postulante_H

#include<iostream>
using namespace std;
#include<string>
#include<iomanip>

//CLASE POSTULANTE
class Postulante
{
	private:
		char codigo[5];
		char nombres[20];
		char apellidos[20];
		char dni[9];
		char direccion[20];
		int edad;
		char telefono[10];
		int nmascotas;
	public:
		Postulante();
		Postulante(char c[], char n[], char a[], char d[], char dir[], int e,char t[]);
		void registrarPostulante();
		void mostrarPostulante();
		string getCodigo();
		int getEdad();
		
};

#endif
