#include"Perro.h"

#include<iostream>
using namespace std;

Perro :: Perro(char c[],char n[],char es[],char s[],char r[],char t[]) : Mascota(c,n,es,s,r,t){
}

void Perro :: registrarPerro(){ 
	Mascota :: registrarMascota();
}

void Perro :: mostrarPerro(){
	Mascota :: mostrarMascota();
}

string Perro :: getCodigo(){
	return Mascota :: getCodigo();
}

string Perro :: getNombre(){
	return Mascota :: getNombre();
}

string Perro :: getEspecie(){
	return Mascota :: getEspecie();
}

string Perro :: getSexo(){
	return Mascota :: getSexo();
}
