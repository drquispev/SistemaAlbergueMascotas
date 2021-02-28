#include "Gato.h"

#include<iostream>
using namespace std;

Gato :: Gato(char c[],char n[],char es[],char s[],char r[],char t[]) : Mascota(c,n,es,s,r,t){
}

void Gato :: registrarGato(){
	Mascota :: registrarMascota();
}

void Gato :: mostrarGato(){
	Mascota :: mostrarMascota();
}

string Gato :: getCodigo(){
	return Mascota :: getCodigo();
}

string Gato :: getNombre(){
	return Mascota :: getNombre();
}

string Gato :: getEspecie(){
	return Mascota :: getEspecie();
}

string Gato :: getSexo(){
	return Mascota :: getSexo();
}
