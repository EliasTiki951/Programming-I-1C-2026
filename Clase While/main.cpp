#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Opc;
	int M;
	float Num;
	
	float T = 0;
	int C = 1;
	float Prom = 0;
	float Max = 0;
	float Min = 0;
	
	do{
		cout<<"========"<<endl;
		cout<<"  MENÚ  "<<endl;
		cout<<"========"<<endl;
		cout<<"1. Cargar Datos"<<endl;
		cout<<"2. Mostrar Datos"<<endl;
		cout<<"3. Cerrar"<<endl;
		cout<<" "<<endl;
		cout<<"Elija una Opción: ";
		cin>>Opc;
		
		switch(Opc){
			case 1:
				cout<<" "<<endl;
				Num = 0;
				while(Num!=-1){
					cout<<C<<". Ingrese números (Hasta el -1): ";
					cin>>Num;
					T = T + Num;
					C = C + 1;
					
					if(Num!=-1){
						if(C==2){
							Max = Num;
							Min = Num;
						}else{
							if(Num>Max){
								Max = Num;
							}else{
								if(Num<Min){
									Min = Num;
								}
							}
						}
					}
				}
				if(Num==-1 && C==2){
					Opc = 3;
				}else{
					T = T + 1;
					C = C - 2;
					Prom = T/C;
					cout<<" "<<endl;
				}
				break;
			
			case 2:
				cout<<" "<<endl;
				cout<<"Los números fueron cargados con éxito..."<<endl;
				cout<<"1. El Total es: "<<T<<endl;
				cout<<"2. El Promedio es: "<<Prom<<endl;
				cout<<"3. El Máximo es: "<<Max<<endl;
				cout<<"4. El Mínimo es: "<<Min<<endl;
				
				do{
					cout<<" "<<endl;
					cout<<"1. Volver al Menú"<<endl;
					cout<<"2. Cerrar"<<endl;
					cout<<"¿Qué desea hacer? ";
					cin>>M;
					if(M==1){
						Opc = 1;
					}else{
						if(M==2){
							Opc = 3;
						}else{
							cout<<"Error. Vuelva a Elegir..."<<endl;
						}
					}
				}while(M != 1 && M != 2);
				
				if(Opc==1){
					cout<<" "<<endl;
				}
				break;
				
			case 3:
				break;
			
			default:
				cout<<"Error. Vuelva a elegir..."<<endl;
				cout<<" "<<endl;
		}
		
	}while(Opc!=3);
	cout<<" "<<endl;
	cout<<"Cerrando..."<<endl;
	cout<<"Cerrado con Éxito"<<endl;
	
	getch();
	return 0;
}
