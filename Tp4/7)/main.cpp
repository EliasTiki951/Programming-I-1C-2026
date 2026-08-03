// 7) Descuento escalonado por cliente
// Ingresar tipo de cliente (A, B, C) y monto de compra.
// Aplicar descuento según categoría y monto.

#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	double Monto, Total;
	int Tipo;
	
	while(true){
		cout<<"Monto de la compra: ";
		cin>>Monto;
		cout<<"Ingrese tipo de cliente:"<<endl;
		cout<<"1. Tipo A"<<endl;
		cout<<"2. Tipo B"<<endl;
		cout<<"3. Tipo C"<<endl;
		cin>>Tipo;
		
		switch(Tipo){
			case 1:
				cout<<"Descuento del 60%"<<endl;
				Total = Monto-Monto*0.60;
				cout<<"\n";
				break;
			case 2:
				cout<<"Descuento del 40%"<<endl;
				Total = Monto-Monto*0.40;
				cout<<"\n";
				break;
			case 3:
				cout<<"Descuento del 20%"<<endl;
				Total = Monto-Monto*0.20;
				cout<<"\n";
				break;
			default:
				cout<<"Error..."<<endl;
				cout<<"Elija una de las opciones..."<<endl;
				cout<<"\n";
				continue;
		}
		
		if(Tipo==1 || Tipo==2 || Tipo==3){
			cout<<"El Monto total con descuento es de $"<<Total<<endl;
		}
		return 0;
	}
	
	getch();
	return 0;
}
