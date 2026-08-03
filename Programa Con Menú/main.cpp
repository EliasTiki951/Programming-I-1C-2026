#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Opc;
	float Pre;
	int C = 0;
	int CoA = 0;
	int CoB = 0;
	int CoC = 0;
	float T = 0;
	float TA = 0;
	float TB = 0;
	float TC = 0;
	float PromT = 0; 
	
	while(true){
		cout<<"================"<<endl;
		cout<<"      MENÚ      "<<endl;
		cout<<"================"<<endl;
		cout<<endl;
		cout<<"1. Cargar Datos"<<endl;
		cout<<"2. Mostrar Datos"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"\n";
		cout<<"Elija una opción: ";
		cin>>Opc;
		
		switch(Opc){
			case 1:
				cout<<"\n";
				cout<<"Precio del producto: ";
				cin>>Pre;
				
				while(Pre>0){
					T += Pre;  // T = T + Pre
					C++;  // C = C + 1
					
					if(Pre<10000){
						CoA++;   // CoA = CoA + 1
						TA += Pre;   // TA = TA + Pre
					}else{
						if(Pre>50000){
							CoC++;  // CoC = Coc + 1
							TC += Pre;  // TC = TC + Pre
						}else{
							CoB++;  // CoB = CoB + 1
							TB += Pre;  // TB = TB + Pre
						}
					}
					
					cout<<"Precio del producto: ";
					cin>>Pre;
				}
				PromT = T/C;
				cout<<"\n";
				break;
				
			case 2:
				cout<<"\nDatos cargados con exito...\n"<<endl;
				cout<<"1. El monto total: "<<T<<endl;
				cout<<"2. El monto promedio: "<<PromT<<endl;
				cout<<"3. El monto por categoria: \n";
				cout<<"        3.a Monto de la categoria A : "<<TA<<endl;
				cout<<"        3.b Monto de la categoria B : "<<TB<<endl;
				cout<<"        3.c Monto de la categoria C : "<<TC<<endl;
				cout<<"4. La cantidad por categoria: \n";
				cout<<"        4.a Cantidad de la categoria A : "<<CoA<<endl;
				cout<<"        4.b Cantidad de la categoria B : "<<CoB<<endl;
				cout<<"        4.c Cantidad de la categoria C : "<<CoC<<endl;
				cout<<"\n";
				break;
				
			case 0:
				cout<<"\n";
				cout<<"Cerrando...\n";
				cout<<"Cerrado con Exito\n";
				return 0;
				break;
					
		}
	}
	
	getch();
	return 0;
}
