#include "Albergue.h"
using namespace std;

Albergue :: Albergue(string n, string d,string t){
	nombre = n;
	direccion = d;
	telefono = t;
}

void Albergue :: agregarMascota(int n){
	int op;
	cout<<"Agregar mascota"<<endl;
	fflush(stdin);
	Mascotas[n].registrarMascota();
}

void Albergue :: mostrarMascotas(int n){
	if(n == 0){
		cout<<"Lo sentimos no tenemos mascotas en estos momentos."<<endl;
	}
	else {
		cout<<" Las siguientes mascotas: "<<endl;
		cout<<"\t";
	    cout<<left;
	    cout<<setw(5)<<"Cod. ";
        cout<<setw(20)<<"Nombre ";
        cout<<setw(8)<<"Especie ";
        cout<<setw(10)<<"Raza ";
        cout<<setw(8)<<"Sexo ";
        cout<<setw(8)<<"Tamano ";
        cout<<endl;
		for(int i=0;i<n;i++){
			cout<<"\t";Mascotas[i].mostrarMascota();
			cout<<endl;
		}
	}
}

/*int Albergue :: ubicarMascota(string dato){
	int i = 0;
	int pos = 0;
	while(Mascotas[i].getCodigo()!=dato && i<cm){
		i=i+1;
		if(i<=cm){
			pos=i;
		}
	}
	return pos;
}*/


Mascota Albergue :: getMascota(int n){
	return Mascotas[n];
}

int Albergue :: getaux(){
	return aux;
}

string Albergue :: getcodM(int n){
	return Mascotas[n].getCodigo();
}

string Albergue :: getnomM(int n){
	return Mascotas[n].getNombre();
}

string Albergue :: getespM(int n){
	return Mascotas[n].getEspecie();
}

string Albergue :: getsexoM(int n){
	return Mascotas[n].getSexo();
}

string Albergue :: getrazaM(int n){
	return Mascotas[n].getRaza();
}
		
string Albergue :: gettamM(int n){
	return Mascotas[n].getTam();
}

bool Albergue :: buscarMascota(int n,string dato){
	return Mascotas[n]==dato;
}
