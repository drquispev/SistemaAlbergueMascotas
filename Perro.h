#ifndef PERRO_H
#define PERRO_H

#include "mascota.h"
#include<iostream>
using namespace std;
#include<string>

//CLASE PERRO :: CLASE DERIVADA
class Perro : public Mascota{
	public:
	    Perro(char c[],char n[],char es[],char s[],char r[],char t[]);
		void registrarPerro();
		void mostrarPerro();
		//void modificarMascota();
		string getCodigo();
		string getNombre();
		string getEspecie();
		string getSexo();
};

#endif
