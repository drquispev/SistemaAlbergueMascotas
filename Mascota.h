using namespace std;
#ifndef MASCOTA_H
#define MASCOTA_H

#include<iostream>
#include<string>
;
class Mascota
{
	private:
		string codigo,nombre,especie,sexo,raza,tam;
		int edad;
		
	public:
		Mascota(string c ,string n ,string es, string r ,string s ,string t ,int e);
		void registrarMascota();
		void mostrarMascota();
		void modificarMascota();
};

#endif
