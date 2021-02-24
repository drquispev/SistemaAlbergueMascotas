#ifndef MASCOTA_H
#define MASCOTA_H

#include<iostream>
using namespace std;
#include<string>

class Mascota
{
	protected:
		string codigo,nombre,especie,sexo,raza,tam;
		int edad;
		
	public:
		Mascota(string c ,string n ,string es, string r ,string s ,string t ,int e);
		~Mascota();
		void registrarMascota();
		void mostrarMascota();
		void modificarMascota();
};

#endif
