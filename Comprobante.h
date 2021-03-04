#ifndef COMPROBANTE_H
#define COMPROBANTE_H

#include<iostream>
#include<iomanip>
#include<windows.h>
#include<string>
using namespace std;
#include "Postulante.h"
#include "Mascota.h"
#include "Solicitud.h"
//CLASE COMPROBANTE
class Comprobante{
	private:
		string codigo;
		string fecha;
	    Mascota mascota;
		Postulante postulante;
		Solicitud solicitud;
		bool fin;
	public:
		Comprobante();
		void generarSolicitud();
		void comprobarSolicitud();
		void generarComprobante();
		int seleccionarMascota(Mascota m[],int n,string dato);
		int seleccionarPostulante(Postulante p[],int n,string dato);
		Postulante getPostulante(Postulante *p);
		Mascota getMascota(Mascota *m);
		string getCodigo();
		string getFecha();
		bool getAprobado();
		string getnombreP();
		string getcodM();
		string getcodP();
		void asignarMascota(Mascota m);	
};
#endif
