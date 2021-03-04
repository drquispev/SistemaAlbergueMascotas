#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>
#include<string>
using namespace std;
#include "Mascota.h"
#include "Mascota.cpp"
#include "Albergue.h"
#include "Albergue.cpp"
#include "Postulante.h"
#include "Postulante.cpp"
#include "Comprobante.h"
#include "Comprobante.cpp"
#include"Solicitud.h"
#include "Solicitud.cpp"
//FUNCIÓN PRINCIPAL
//FUNCIÓN PRINCIPAL actualizar
int main(){
	int op;
	fstream archivo,archivo2;
	fstream leer,leer2;
	leer.open("listComprobantes.txt",ios::in|ios::app);
	leer2.open("listMascotas.txt",ios::in|ios::app);
	Albergue obj("Wuff","Av. San Martin","952625516");
	Comprobante comps[100];
	Solicitud os;
	int nc = 0,nm = 0;
	Mascota fantasma;
	Postulante obje;
    do{
    	system("CLS");
    	cout<<"\tMenu"<<endl;
    	cout<<"1. Agregar Mascota"<<endl;
    	cout<<"2. extraer mascotas"<<endl;
    	cout<<"3. Mostrar mascotas"<<endl;
    	cout<<"4. Ordenar Mascotas"<<endl;
    	cout<<"3. Realizar adopcion"<<endl;
    	cout<<"4. Completar adopcion"<<endl;
    	cout<<"0. Salir"<<endl;
    	cout<<"Ingrese una opcion: ";cin>>op;
    	system("CLS");
    	switch(op){
    		case  1:
    			//Archivos
    			archivo2.open("listMascotas.txt",ios::out|ios::app);
    			if(archivo2.is_open()){
		        cout<<"\tAcceso correcto del archivo"<<endl;
                 	cout<<"\nRegistrando Mascota"<<endl;
                 	obj.agregarMascota(nm);
                    archivo2<<setw(8)<<obj.getcodM(nm)<<" "<<setw(20)<<obj.getnomM(nm)<<" "<<setw(8)<<obj.getespM(nm)<<" ";
                    archivo2<<setw(10)<<obj.getrazaM(nm)<<" "<<setw(8)<<obj.gettamM(nm)<<" "<<setw(8)<<obj.getsexoM(nm)<<endl;
                    nm++;
             	}
	        archivo2.close();
    		break;
    		case 2:
    			archivo2.open("listMascotas.txt",ios::in|ios::app);
    			if(archivo2.is_open()){
		        cout<<"\tAcceso correcto del archivo"<<endl;
             	for(int i=0;i<nm;i++){
             		obj.extraerMascotas(i);
				 }
             	}
             	else{
             		cout<<"ERROR: No se pudo entrar.";
				 }
	            archivo2.close();
    		break;
    		case 3:
    			cout<<"\n- Lista de mascotas"<<endl<<endl;
    			char buffer[500];
    			
                cout<<"\t"<<setw(8)<<"Codigo"<<" "<<setw(20)<<"Nombre "<<" "<<setw(8)<<"Especie"<<" ";
                cout<<setw(10)<<"Raza"<<" "<<setw(8)<<"Tamano"<<" "<<setw(8)<<"Sexo"<<endl;
   	            archivo2.open("listMascotas.txt");
   	            if(!archivo2.good())
              	{
         	       cout<<"Error al abrir el archivo";
   	            }
   	            else
   	            {
              	while(!archivo2.eof())
         	    {
                	archivo2.getline(buffer,100); 
                	cout<<"\t"<<buffer<<endl;
         	    }
            	system("pause");
            	}
            	archivo2.close();
    		break;
    		case 4:
    			int k,i,cen;
    			int x;
    			x=1;
            	k=nm;
            	while(k>1){
            		k=int(k/2);
	            	cen=1;
	            	while(cen==1){
	            		cen=0;
	            		i=1;
	          		    while(i+k<=nm){		
						  cen=obj.compararMascotas(i,i+k,fantasma);		
			            i=i+1;
		            	}
		            }
	            	x++;
            	}
    		break;
    		case 5:
    			    archivo.open("listComprobantes.txt",ios::out|ios::app);
    				if(archivo.is_open()){
    					cout<<"\tAcceso correcto del archivo"<<endl;
    					cout<<" Evaluando requisitos... "<<endl;
    					comps[nc].generarSolicitud();
    					system("CLS");
    					comps[nc].comprobarSolicitud();
    					obj.mostrarMascotas(nm);
    					if(nm==0){
	                        cout<<"\n Su adopcion quedara pendiente :("<<endl;
							cout<<"\n Lo llamaremos cuando tengamos mascotas disponibles."<<endl;
						}
						else{
							string dato;
    					    cout<<"\nIngrese el codigo de la mascota que desea adoptar: ";
    					    getline(cin,dato);
    					    int poci;
    					    for(int i=0;i<nm;i++){
    					    	if(obj.buscarMascota(i,dato)==true){
    					    		poci = i;
								}
							}
							comps[nc].asignarMascota(obj.getMascota(poci));
    					    comps[nc].generarComprobante();
    					    archivo<<setw(5)<<comps[nc].getCodigo()<<" "<<setw(8)<<comps[nc].getFecha()<<" ";
    					    archivo<<setw(15)<<comps[nc].getcodP()<<" "<<setw(12)<<comps[nc].getcodM()<<" ";
    					    if(comps[nc].getAprobado()==true){
    					    	archivo<<setw(10)<<"Aprobado"<<endl;
							}
							else{
								archivo<<setw(10)<<"Desaprobado"<<endl;
							}
						}
    				}
    				archivo.close();
    		break;
    		case 6:
    		break;
    		case 0:
    		break;
    		default:
    		break;
		}
		system("PAUSE");
	}while(op!=0);
	return 0;
}
