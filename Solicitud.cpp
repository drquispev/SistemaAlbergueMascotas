#include "Solicitud.h"

Solicitud :: Solicitud(){
	inmuebleT="NULL";
	strcpy(espacio,"");
	strcpy(propio,"");
	profesion = "NULL";
	salario = 0.00;
	strcpy(paciente,"");
	strcpy(agresivo,"");
	strcpy(activa,"");
	horas = 0;
	strcpy(esterilizar,"NULL");
	postulante = NULL;
	aprobado = false;
	puntaje = 20;
}

bool Solicitud :: comprobarRequisitos(Postulante *p){
	int c=0;
	if(p->getEdad()>=18){
		c++;
	}
	if(p->getDireccion()!=""){
		c++;
	}
	if(c==2){
		return true;
	}
	else{
		return false;
	}
}

void Solicitud :: rellenarSolicitud(){
	cout<<"REGISTRANDO SOLICITUD: "<<endl;
	cout<<"Ingresar el tipo de inmueble (casa/departamento): ";
	getline(cin,inmuebleT);
	cout<<"¿El inmueble es popio? (Si/No)";
	cin.getline(propio,3,'\n');
	cout<<"¿Cuenta con algun espacio abierto para la mascota? (Si/No): ";
	cin.getline(espacio,3,'\n');
	cout<<"Ingresar la profesion u oficio: ";
	getline(cin,profesion);
	cout<<"Ingresar el salario: ";
	cin>>salario;
	cout<<"Te consideras una persona paciente (Si/No): ";
	cin.getline(paciente,3,'\n');
	cout<<"Has tenido problemas por ser agresivo (Si/No): ";
	cin.getline(agresivo,3,'\n');
	cout<<"Eres una persona activa (Si/No):";
	cin.getline(activa,3,'\n');
	cout<<"¿Cuanto tiempo libre tienes al dia? (Horas): ";
	cin>>horas;
	cout<<"Estarias de acuerdo con esterelizar a tu mascota (Si/No): ";
	cin.getline(esterilizar,3,'\n');
}

void Solicitud :: mostrarResultados(Postulante *p){
	if(aprobado==true){
		cout<<"El postulante "<<p->getNombres()<<" "<<p->getApellidos()<<" ha aprobado la solicitud."<<endl;
		cout<<"Obtuviendo un resultado de: "<<puntaje<<" puntos."<<endl;
	}
	else{
		cout<<"El postulante "<<p->getNombres()<<" "<<p->getApellidos()<<" ha aprobado la solicitud."<<endl;
		cout<<"Obtuviendo un resultado de: "<<puntaje<<" puntos."<<endl;
	}
}

int Solicitud :: determinarResultado(){
	puntaje = 20;
	if(inmuebleT==""){
		puntaje--;
	}
	if(propio=="No"){
		puntaje=puntaje-2;
	}
	if(espacio=="No"){
		puntaje=puntaje-2;
	}
	if(profesion==""){
		puntaje=puntaje-4;
	}
	if(salario<1250){
		puntaje=puntaje-4;
	}
	if(paciente=="No"){
		puntaje--;
	}
	if(agresivo=="Si"){
		puntaje=puntaje-2;
	}
	if(activa=="No"){
		puntaje--;
	}
	if(horas<4){
		puntaje=puntaje-2;
	}
	if(esterilizar=="No"){
		puntaje--;
	}
	return puntaje;
}

void Solicitud :: seAprobo(int resultado){
	if(resultado>14){
       aprobado=true;		
	}
	else{
	   aprobado=false;
	}
}

Postulante Solicitud :: getPostulante(Postulante *p){
	postulante = p;
}
