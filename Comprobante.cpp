#include "Comprobante.h"

#include<iostream>
using namespace std;

Comprobante :: Comprobante(string c,string f,float p){
	codigo = c;
	fecha = f;
	pago = p;
	mascota = NULL;
	postulante = NULL;
}

void Comprobante :: generarSolicitud(){
	int op;
	cout<<"Generando Solicitud"<<endl;
	cout<<"Ingrese el codigo de comprobante: ";
	getline(cin,codigo);
	cout<<"Ingrese la fecha (--/--/--): ";
	getline(cin,fecha);
	cout<<"Rellenar datos del postulante:"<<endl;
	postulante->registrarPostulante();
	cout<<"\nProcesando datos...";
} 

void Comprobante :: comprobarSolicitud(Postulante *p){
	bool band1 = false,band2 = false,band3 = false;
	if(p->getEdad()>=18){
		band1 = true;
	}
}

int Comprobante :: seleccionarMascota(Mascota m[],int n,string dato){
	int i = 0;
	int pos = 0;
	while(m[i].getCodigo()!=dato && i<n){
		i=i+1;
		if(i<=n){
			pos=i;
		}
	}
	return pos;
}

int Comprobante :: seleccionarPostulante(Postulante p[],int n,string dato){
	int i = 0;
	int pos = 0;
	while(p[i].getCodigo()!=dato && i<n){
		i=i+1;
		if(i<=n){
			pos=i;
		}
	}
	return pos;
}

Mascota Comprobante :: getMascota(Mascota *m){
	mascota = m;
}

Postulante Comprobante :: getPostulante(Postulante *p){
	postulante = p;
}

