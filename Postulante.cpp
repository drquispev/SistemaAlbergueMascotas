#include "Postulante.h"

#include<iostream>
#include<string.h>
using namespace std;

Postulante:: Postulante(char c, char n, char a, char d, char dir, int e,char t){
	strcpy(codigo,c);
	strcpy(nombres,n);
	strcpy(apellidos,a);
	strcpy(dni,d);
	strcpy(direccion,dir);
	edad = e;
	strcpy(telefoo,t);
	nmascotas = 0;	
}
