#include "Albergue.h"
using namespace std;

Albergue :: Albergue(string n, string d,string t){
	nombre = n;
	direccion = d;
	telefono = t;
}

/*void Albergue :: agregarMascota(Mascota *m){
	string c,n,es,s,r,t;
    int e;
	cout<<"Ingrese codigo de la mascota: ";
	getline(cin,c);
	cout<<"Ingrese el nombre de la mascota: ";
	getline(cin,n);
	cout<<"Ingrese la especie de la mascota (Perro o Gato): ";
	getline(cin,es);
	cout<<"Ingrese la raza de la mascota: ";
	getline(cin,r);
	cout<<"Ingrese el sexo de la mascota (Macho/Hembra): ";
	getline(cin,s);
	cout<<"Ingrese el Tamano de la mascota (Chico/Mediano/Grande): ";
	getline(cin,t);
	cout<<"Ingrese la edad de la mascota : ";
	cin>>e;
}*/

void Albergue :: mostrarMascotas(){
	if(cm == 0){
		cout<<"Lo sentimos no tenemos mascotas en estos momentos."<<endl;
	}
	else {
		cout<<"Las siguientes mascotas: "<<endl;
		for(int i=0;i<cm;i++){
			cout<<"\t";Mascotas[i]->mostrarMascota();
		}
	}
}


