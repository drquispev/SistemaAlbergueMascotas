#ifndef Albergue_H
#define Albergue_H

#include<iostream>
using namespace std;
class Albergue{
	private:
		string nombre,direccion,telefono;
	public:
		Albergue();
		void agregarMascota();
		void agregarPostulante();
		void mostrarMascotas();
		void mostrarPostulantes();	
};
#endif
