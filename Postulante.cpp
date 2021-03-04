#include "Postulante.h"

Postulante :: Postulante(){
	codigo = "NULL";
    nombres = "NULL";
    apellidos = "NULL";
	dni  = "NULL";
    direccion = "NULL";
    edad = 0;
	telefono = "NULL";
    nmascotas = 0;
}

/*Postulante :: Postulante(char c[], char n[], char a[], char d[], char dir[], int e,char t[]){
	strcpy(codigo,c);
	strcpy(nombres,n);
	strcpy(apellidos,a);
	strcpy(dni,d);
	strcpy(direccion,dir);
	edad = e;
	strcpy(telefono,t);
	nmascotas = 0;
}*/

void Postulante :: registrarPostulante(){
	cout<<"Registrando Postulante"<<endl;
	fflush(stdin);
	cout<<"Ingrese el codigo del postulante: ";
	getline(cin,codigo);
	cout<<"Ingresar nombre(s): ";
	getline(cin,nombres);
	cout<<"Ingresar apellidos: ";
	getline(cin,apellidos);
	cout<<"Ingresar DNI: ";
	getline(cin,dni);
	cout<<"Ingresar direccion: ";
	getline(cin,direccion);
	cout<<"Ingresar su edad (anios): ";
	cin>>edad;
	fflush(stdin);
	cout<<"Ingresar telefono: ";
	getline(cin,telefono);
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
	return codigo;
}

int Postulante :: getEdad(){
	return edad;
}

string Postulante :: getDireccion(){
	return direccion;
}

string Postulante :: getNombres(){
	return nombres;
}

string Postulante :: getApellidos(){
	return apellidos;
}
