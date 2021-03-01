#ifndef ALBERGUE_H
#define ALBERGUE_H

#include "Mascota.h"
#include "Perro.h"
#include "Gato.h"
#include<iostream>
#include<string.h>
using namespace std;
//CLASE ALBERGUE
class Albergue{
	private:
		string nombre,direccion,telefono;
		Mascota *Mascotas[100];
		Perro *Perros[100];
		Gato *Gatos[100];
		//int cm;
		int cp = 0;
		int cg = 0;
	public:
		Albergue(string n, string d,string t);
		void agregarMascota();
		void agregarPostulante();
		void mostrarMascotas();
		void mostrarPostulantes();	
};
#endif
