#include "Comprobante.h"

#include<iostream>
using namespace std;

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

Mascota Comprobante :: getMascota(Mascota *m){
	mascota = m;
}

Postulante Comprobante :: getPostulante(Postulante *p){
	postulante = p;
}
