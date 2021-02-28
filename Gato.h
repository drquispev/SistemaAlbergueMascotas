#ifndef GATO_H
#define GATO_H

#include "Mascota.h"
#include<iostream>
using namespace std;
#include<string>

//CLASE GATO :: CLASE DERIVADA
class Gato : public Mascota{
	public:
	    Gato();
	    Gato(char c[],char n[],char es[],char s[],char r[],char t[]);
		void registrarGato();
		void mostrarGato();
		//void modificarMascota();
		string getCodigo();
		string getNombre();
		string getEspecie();
		string getSexo();
};

#endif
