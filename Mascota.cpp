#include "Mascota.h"
#include<iostream>

#include<string>
#include<iomanip>
using namespace std;

Mascota :: Mascota(string c ,string n ,string es, string r ,string s ,string t ,int e){
	codigo = c;
	nombre = n;
	especie = es;
	sexo = s;
	raza = r;
	tam = t;
	edad = e;
} 

void Mascota :: registrarMascota(){
}

void Mascota :: mostrarMascota(){
	cout<<left;
	cout<<setw(4)<<codigo;
	cout<<setw(20)<<nombre;
	cout<<setw(8)<<especie;
	cout<<setw(10)<<raza;
	cout<<setw(8)<<sexo;
	cout<<setw(8)<<tam;
	cout<<setw(4)<<edad;
}
