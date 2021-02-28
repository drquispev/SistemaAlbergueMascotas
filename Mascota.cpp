#include "Mascota.h"
#include<iostream>

#include<string>
#include<iomanip>
using namespace std;

Mascota :: Mascota(){
	strcpy(codigo,"MULL");
	strcpy(nombre,"NULL");
	strcpy(especie,"NULL");
	strcpy(sexo,"NULL");
	strcpy(raza,"NULL");
	strcpy(tam,"NULL");
}

Mascota :: Mascota(char c[],char n[],char es[],char s[],char r[],char t[]){
	strcpy(codigo,c);
	strcpy(nombre,n);
	strcpy(especie,es);
	strcpy(sexo,s);
	strcpy(raza,r);
	strcpy(tam,t);
} 

void Mascota :: registrarMascota(){ 
	cout<<"Ingrese codigo de la mascota: ";
	cin.getline(codigo,5,'\n');
	cout<<"Ingrese el nombre de la mascota: ";
	cin.getline(nombre,10,'\n');
	cout<<"Ingrese la especie de la mascota (Perro o Gato): ";
	cin.getline(especie,8,'\n');
	cout<<"Ingrese la raza de la mascota: ";
	cin.getline(sexo,8,'\n');
	cout<<"Ingrese el sexo de la mascota (Macho/Hembra): ";
	cin.getline(raza,10,'\n');
	cout<<"Ingrese el Tamano de la mascota (Chico/Mediano/Grande): ";
	cin.getline(tam,8,'\n');
}

void Mascota :: mostrarMascota(){
	cout<<left;
	cout<<setw(4)<<codigo;
	cout<<setw(20)<<nombre;
	cout<<setw(8)<<especie;
	cout<<setw(10)<<raza;
	cout<<setw(8)<<sexo;
	cout<<setw(8)<<tam;
}

string Mascota :: getCodigo(){
    string c;
	c = codigo;
	return c;
}

string Mascota :: getNombre(){
    string n;
	n = nombre;
	return n;
}

string Mascota :: getEspecie(){
    string es;
	es = especie;
	return es;
}

string Mascota :: getSexo(){
    string s;
	s = sexo;
	return s;
}
