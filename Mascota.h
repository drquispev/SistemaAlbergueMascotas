#ifndef MASCOTA_H
#define MASCOTA_H

#include<iostream>
#include<iomanip>
#include<windows.h>
#include<string>
using namespace std;

//CLASE MASCOTA 
class Mascota
{
	private:
		string codigo;
		string nombre;
		string especie;
		string sexo;
		string raza;
		string tam;		
	public:
		Mascota();
		//Mascota(char c[],char n[],char es[],char s[],char r[],char t[]);
		void registrarMascota();
		void mostrarMascota();
		string getCodigo();
		string getNombre();
		string getEspecie();
		string getSexo();	
		string getRaza();
		string getTam();
		bool operator==(string);
		bool operator=(Mascota);
		bool operator>(Mascota);	
		void extraerMascota();
		friend istream & operator >> (istream &, Mascota &);
};


#endif
