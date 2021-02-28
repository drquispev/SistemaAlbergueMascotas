#ifndef MASCOTA_H
#define MASCOTA_H

#include<iostream>
using namespace std;
#include<string>

//CLASE MASCOTA :: CLASE BASE
class Mascota
{
	private:
		char codigo[5];
		char nombre[10];
		char especie[8];
		char sexo[8];
		char raza[10];
		char tam[8];		
	public:
		Mascota();
		Mascota(char c[],char n[],char es[],char s[],char r[],char t[]);
		void registrarMascota();
		void mostrarMascota();
		//void modificarMascota();
		string getCodigo();
		string getNombre();
		string getEspecie();
		string getSexo();		
};


#endif
