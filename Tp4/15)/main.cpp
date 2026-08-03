// 15) Simulación de compra con impuestos y descuentos
// Ingresar precio y forma de pago:
// 1. Efectivo => 10% descuento
// 2. Débito => 5% descuento
// 3. Crédito => 15% recargo

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	float Pre, Desc, Total, Rec;
	int Pago;
	
	cout<<"Ingrese el Precio: ";
	cin>>Pre;
	cout<<"\n";
	
	while(true){
		cout<<"Ingrese forma de Pago: "<<endl;
		cout<<"1. Efectivo"<<endl;
		cout<<"2. Débito"<<endl;
		cout<<"3. Crédito"<<endl;
		cout<<"Elija una opción: ";
		cin>>Pago;
		
		switch(Pago){
			case 1:
				cout<<"Se aplica un 10% de descuento."<<endl;
				Desc = Pre*0.10;
				Total = Pre - Desc;
				break;
			case 2:
				cout<<"Se aplica un 5% de descuento."<<endl;
				Desc = Pre*0.05;
				Total = Pre - Desc;
				break;
			case 3:
				cout<<"Se aplica un 15% de recargo"<<endl;
				Rec = Pre*0.15;
				Total = Pre + Rec;
				break;
			default:
				cout<<"Error... Elija una opción"<<endl;
				cout<<"\n";
				continue;
		}
		break;
	}
	
	cout<<"El Total es de $"<<Total<<endl;
	
	getch();
	return 0;
}
