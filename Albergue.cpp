#include "Albergue.h"
using namespace std;

Albergue :: Albergue(string n, string d,string t){
	nombre = n;
	direccion = d;
	telefono = t;
	cm = 0;
}

void Albergue :: agregarMascota(){
	int op;
	do{
		cout<<"Agregar mascota"<<endl;
		cout<<"1. Agregar perro"<<endl;
		cout<<"2. Agregar gato"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"Ingrese una opcion: ";cin>>op;
		switch(op){
			case 1:
				fflush(stdin);
			    Perros[cp]->registrarPerro();
	            cp++;	
			break;
			case 2:
			    fflush(stdin);
				Gatos[cg]->registrarGato();
	            cg++;
			break;
			case 0:
			break;
			default:
				cout<<"Opcion invalida"<<endl;
			break;
		}
	}while(op!=1&&op!=1&&op!=2);
}

void Albergue :: mostrarMascotas(){
	if(cp == 0 && cg==0){
		cout<<"Lo sentimos no tenemos mascotas en estos momentos."<<endl;
	}
	else {
		cout<<"Las siguientes mascotas: "<<endl;
		for(int i=0;i<cp;i++){
			cout<<"\t";Perros[i]->mostrarPerro();
			cout<<endl;
		}
		for(int i=0;i<cp;i++){
			cout<<"\t";Gatos[i]->mostrarGato();2
			cout<<endl;
		}
	}
}
