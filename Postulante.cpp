#include "Postulante.h"

#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

Postulante :: Postulante(){
	strcpy(codigo,"NULL");
	strcpy(nombres,"NULL");
	strcpy(apellidos,"NULL");
	strcpy(dni,"NULL");
	strcpy(direccion,"NULL");
	edad = 0;
	strcpy(telefono,"NULL");
	nmascotas = 0;
}

Postulante :: Postulante(char c[], char n[], char a[], char d[], char dir[], int e,char t[]){
	strcpy(codigo,c);
	strcpy(nombres,n);
	strcpy(apellidos,a);
	strcpy(dni,d);
	strcpy(direccion,dir);
	edad = e;
	strcpy(telefono,t);
	nmascotas = 0;	
}

void Postulante :: registrarPostulante(){
	fflush(stdin);
	cout<<"Ingrese el codigo del postulante: ";
	cin.getline(codigo,5,'\n');
	cout<<"Ingresar nombre(s): ";
	cin.getline(nombres,20,'\n');
	cout<<"Ingresar apellidos: ";
	cin.getline(apellidos,20,'\n');
	cout<<"Ingresar DNI: ";
	cin.getline(dni,9,'\n');
	cout<<"Ingresar direccion: ";
	cin.getline(direccion,20,'\n');
	fflush(stdin);
	cout<<"Ingresar su edad (anios): ";
	cin>>edad;
	fflush(stdin);
	cout<<"Ingresar telefono: ";
	cin.getline(telefono,10,'\n');
}

void Postulante :: mostrarPostulante(){
	cout<<left;
	cout<<setw(5)<<codigo;
	cout<<setw(20)<<nombres;
	cout<<setw(20)<<apellidos;
	cout<<setw(9)<<dni;
	cout<<setw(20)<<direccion;
	cout<<setw(3)<<edad;
	cout<<setw(10)<<telefono;
}

string Postulante :: getCodigo(){
	string c;
	c = codigo;
	return c;
}

int Postulante :: getEdad(){
	return edad;
}
