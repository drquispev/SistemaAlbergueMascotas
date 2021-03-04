#ifndef SOLICITUD_H
#define SOLICITUD_H

#include "Postulante.h"
#include<iostream>
#include<iomanip>
#include<windows.h>
#include<string>
using namespace std;
//CLASE SOLICITUD 
class Solicitud{
	private:
		string inmuebleT;
		char espacio[3];
		char propio[3];
		string profesion;
		float salario;
		char paciente[3];
		char agresivo[3];
		char activa[3];
		int horas;
		char esterilizar[3];
		Postulante *postulante;
		bool aprobado;
        int puntaje;
	public:
		Solicitud();
		bool comprobarRequisitos(Postulante *p);
		void rellenarSolicitud();
		void mostrarResultados(Postulante *p);
		int determinarResultado();
		void seAprobo(int resultado);
		Postulante getPostulante(Postulante *p);
		bool getAprobo();
};
#endif
