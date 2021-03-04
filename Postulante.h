#ifndef POSTULANTE_H
#define POSTULANTE_H

#include<iostream>
#include<iomanip>
#include<windows.h>
#include<string>
using namespace std;

//CLASE POSTULANTE 
class Postulante
{
	private:
		string codigo;
		string nombres;
		string apellidos;
		string dni;
		string direccion;
		int edad;
		string telefono;
		int nmascotas;
	public:
		Postulante();
		//Postulante(char c[], char n[], char a[], char d[], char dir[], int e,char t[]);
		void registrarPostulante();
		void mostrarPostulante();
		//void realizarAdopción();
		string getCodigo();
		int getEdad();
		string getDireccion();	
		string getNombres();
		string getApellidos();
};

#endif
