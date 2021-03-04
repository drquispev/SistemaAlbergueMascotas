#include "Comprobante.h"

Comprobante :: Comprobante(){
	codigo = "NULL";
	fecha = "--/--/--";
}

void Comprobante :: generarSolicitud(){
	int op;
	cout<<" Generando Solicitud"<<endl;
	fflush(stdin);
	cout<<" Ingrese el codigo de comprobante: ";
	getline(cin,codigo);
	cout<<" Ingrese la fecha (-/-/-): ";
	getline(cin,fecha);
	cout<<" Rellenar datos del postulante:"<<endl;
	postulante.registrarPostulante();
	cout<<"\nProcesando datos...";
	if(solicitud.comprobarRequisitos(&postulante)==true){
		cout<<"\nUsted cumple con los requisitos para adoptar"<<endl;
		solicitud.rellenarSolicitud();
	}
	else{
		cout<<"\n¡Lo sentimos!, Usted no cumple con los requisitos para adoptar."<<endl;
	}
} 

void Comprobante :: generarComprobante(){
	if(solicitud.getAprobo()==true){
		cout<<"\n\tSe completo exitosamente la adopcion."<<endl;
		fin=true;
	}
	else{
		cout<<"\n\tNo se completo el proceso de adopcion."<<endl;
		fin=false;
	}
}

void Comprobante :: comprobarSolicitud(){
	solicitud.seAprobo(solicitud.determinarResultado());
	solicitud.mostrarResultados(&postulante);	
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

/*Mascota Comprobante :: getMascota(Mascota *m){
	mascota = m;
}*/

/*Postulante Comprobante :: getPostulante(Postulante p){
	postulante = p;
}*/

string Comprobante :: getCodigo(){
	return codigo;
}

string Comprobante :: getFecha(){
	return fecha;
}

bool Comprobante :: getAprobado(){
	return solicitud.getAprobo();
}

string Comprobante :: getnombreP(){
	return postulante.getNombres();
}

string Comprobante :: getcodP(){
	return postulante.getCodigo();
}

string Comprobante :: getcodM(){
	return mascota.getCodigo();
}

void Comprobante :: asignarMascota(Mascota m){
	mascota=m;
}
