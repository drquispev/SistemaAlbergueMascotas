#ifndef Albergue_H
#define Albergue_H

#include ""
#include<iostream>
using namespace std;
class Albergue{
	private:
		string nombre,direccion,telefono;
		Mascota *Mascotas[100];
	public:
		Albergue(string n, string d,string t);
		void agregarMascota();
		void agregarPostulante();
		void mostrarMascotas();
		void mostrarPostulantes();	
};
#endif
