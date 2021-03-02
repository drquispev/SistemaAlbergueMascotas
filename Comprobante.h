#ifndef COMPROBANTE_H
#define COMPROBANTE_H

#include "Postulante.h"
#include "Postulante.cpp"
#include "Mascota.h"
#include "Perro.h"
#include "Gato.h"
#include "Solicitud.h"
#include<iostream>
#include<string.h>
using namespace std;
//CLASE COMPROBANTE 
class Comprobante{
	private:
		string codigo;
		string fecha;
		float pago;
		Mascota *mascota;
		Postulante *postulante;
	    //Solicitud *solicitud;
		
	public:
		//Comprobante();
		Comprobante(string c,string f,float p);
		void generarSolicitud();
		void comprobarSolicitud(Postulante *p);
		void generarComprobante();
		int seleccionarMascota(Mascota m[],int n,string dato);
		int seleccionarPostulante(Postulante p[],int n,string dato);
		Postulante getPostulante(Postulante *p);
		Mascota getMascota(Mascota *m);
};
#endif
