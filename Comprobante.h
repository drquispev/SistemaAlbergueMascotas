#ifndef COMPROBANTE_H
#define COMPROBANTE_H

#include "Postulante.h"
#include "Postulante.cpp"
#include "Mascota.h"
#include "Perro.h"
#include "Gato.h"
#include<iostream>
#include<string.h>
using namespace std;
//CLASE COMPROBANTE
class Comprobante{
	private:
		string codigo;
		string fecha;
		float Pago;
		Mascota *mascota;
		Postulante *postulante;
	//Solicitud *solicitud;
		
	public:
		Comprobante();
		void generarSolicitud();
		void comprobarSolicitud();
		void generarComprobante();
		int seleccionarMascota(Mascota m[],int n,string dato);
		Postulante getPostulante(Postulante *p);
		Mascota getMascota(Mascota *m);
};
#endif
