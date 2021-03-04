#ifndef ALBERGUE_H
#define ALBERGUE_H

#include<iostream>
#include<iomanip>
#include<windows.h>
#include<string>
using namespace std;
//CLASE ALBERGUE  
class Albergue{
	private:
		string nombre,direccion,telefono;
		Mascota Mascotas[100];
		int aux;
	public:
		Albergue(string n, string d,string t);
		void agregarMascota(int n);
		//void agregarPostulante();
		void mostrarMascotas(int n);
		void mostrarPostulantes();
	    int ubicarMascota(string dato);
		Mascota getMascota(int n);
		int getaux();
		string getcodM(int n);
		string getnomM(int n);
		string getespM(int n);
		string getsexoM(int n);
		string getrazaM(int n);
		string gettamM(int n);	
		bool buscarMascota(int n,string dato);
		void extraerMascotas(int n);
		int compararMascotas(int i,int k,Mascota aux);
};
#endif
