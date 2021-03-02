#include <iostream>
#include<string.h>
#include<iomanip>
#include "Mascota.h"
#include "Albergue.h"
#include "Perro.h"
#include "Gato.h"
#include "Postulante.h"
#include "Comprobante.h"
#include"Solicitud.h"
using namespace std;


//FUNCIÓN PRINCIPAL
int main(){
	int op;
	Albergue obj("Wuff","Av. San Martin","952625516");
	Mascota Chamo;
    Perro chopper("001","Chopper","Perro","Chusco","Macho","Chico");
    do{
    	cout<<"Menu"<<endl;
    	cout<<"1. Agregar Mascota"<<endl;
    	cout<<"2. Mostrar mascotas"<<endl;
    	cout<<"3. Generar Comprobante de adopción"<<endl;
    	cout<<"0. Salir"<<endl;
    	cout<<"Ingrese una opcion: ";cin>>op;
    	switch(op){
    		case  1:
    		break;
    		case 2:
    		break;
    		case 3:
    			do{
    	        cout<<"Generando Solicitud"<<endl;
    	        cout<<"1. Agregar Mascota"<<endl;
             	cout<<"2. Mostrar mascotas"<<endl;
             	cout<<"3. Generar Comprobante de adopcion"<<endl;
            	cout<<"0. Salir"<<endl;
    	        cout<<"Ingrese una opcion: ";cin>>op;
             	switch(op){
               		case  1:
             		break;
              		case 2:
    	        	break;
             		case 3:
              		break;
              		case 0:
    	        	default:
              		break;
	        	}
            	}while(op!=0);
    		break;
    		case 0:
    		default:
    		break;
		}
	}while(op!=0);
	//obje.registrarPostulante();
	//obje.mostrarPostulante();
	//obj.agregarMascota();

	//obj.mostrarMascotas();
	return 0;
}
