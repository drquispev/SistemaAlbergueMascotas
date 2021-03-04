#include "Mascota.h"

Mascota :: Mascota(){
	codigo = "000";
	nombre = "NULL";
	especie = "NULL";
	sexo = "NULL";
	raza = "NULL";
	tam = "NULL";	
}

/*Mascota :: Mascota(char c[],char n[],char es[],char s[],char r[],char t[]){
	strcpy(codigo,c);
	strcpy(nombre,n);
	strcpy(especie,es);
	strcpy(sexo,s);
	strcpy(raza,r);
	strcpy(tam,t);
}*/ 

void Mascota :: registrarMascota(){ 
    fflush(stdin);
	cout<<"Ingrese codigo de la mascota: ";
	getline(cin, codigo);
	cout<<"Ingrese el nombre de la mascota: ";
	getline(cin, nombre);
	cout<<"Ingrese la especie de la mascota (Perro o Gato): ";
	getline(cin, especie);
	cout<<"Ingrese la raza de la mascota: ";
	getline(cin, sexo);
	cout<<"Ingrese el sexo de la mascota (Macho/Hembra): ";
	getline(cin, raza);
	cout<<"Ingrese el Tamano de la mascota (Chico/Mediano/Grande): ";
	getline(cin, tam);
}

void Mascota :: mostrarMascota(){
	cout<<left;
	cout<<setw(5)<<codigo;
	cout<<setw(20)<<nombre;
	cout<<setw(8)<<especie;
	cout<<setw(10)<<raza;
	cout<<setw(8)<<sexo;
	cout<<setw(8)<<tam;
}

string Mascota :: getCodigo(){
	return codigo;
}

string Mascota :: getNombre(){
	return nombre;
}

string Mascota :: getEspecie(){
	return especie;
}

string Mascota :: getSexo(){
	return sexo;
}

string Mascota :: getRaza(){
	return raza;
}

string Mascota :: getTam(){
	return tam;
}

bool Mascota :: operator==(string dato){
	if(codigo==dato){
		return true;
	}
	else{
		return false;
	}
}
bool Mascota :: operator=(Mascota obj){
	codigo = obj.codigo;
    nombre = obj.nombre;
	especie = obj.especie;
    sexo = obj.especie;
    raza = obj.raza;
    tam = obj.tam;	
}
