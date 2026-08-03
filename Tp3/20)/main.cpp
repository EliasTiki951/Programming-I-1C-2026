// 20.Sistema de venta con menú
// Crear un menú con switch:
// • Calcular precio final
// • Verificar descuento
// • Salir
// Para calcular precio final:
// • Si el cliente es socio => 20% descuento.
// • Si no es socio pero compra más de $100.000 => 10%.
// • Caso contrario => sin descuento.
// Validar opciones incorrectas en el menú.

#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Opc;
	double Compra, Desc = 0, PrecioFinal;
	string Socio;
	
	while(true){
		cout<<"====================="<<endl;
		cout<<"  SISTEMA DE VENTAS  "<<endl;
		cout<<"====================="<<endl;
		cout<<"1. Calcular Precio Final"<<endl;
		cout<<"2. Verificar Descuento"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Elija una opción: "<<endl;
		cin>>Opc;
		
		switch(Opc){
			case 1:
				cout<<"\n"<<endl;
				cout<<"Ingrese el monto de la compra: ";
				cin>>Compra;
				cout<<"¿Es Socio? Si/No"<<endl;
				cin>>Socio;
				cout<<"\n";
				continue;
			case 2:
				cout<<"\n";
				cout<<"Verificando descuento..."<<endl;
				if(Socio=="Si" || Socio=="si"){
					Desc = Compra*0.20;
					cout<<"Tiene un descuento del 20%"<<endl;
				}else{
					if(Compra>100000){
						Desc = Compra*0.10;
						cout<<"Tiene un descuento del 10%"<<endl;
					}else{
						Desc= 0;
						cout<<"No tiene descuento"<<endl;
					}
				}
				PrecioFinal = Compra - Desc;
				cout<<"Descuento: $"<<Desc<<endl;
				cout<<"Precio Final: $"<<PrecioFinal<<endl;
				cout<<"\n";
				continue;
			case 3:
				cout<<"Saliendo..."<<endl;
				cout<<"Gracias por utilizar el Sistema"<<endl;
				break;
			default:
				cout<<"Opción Incorrecta"<<endl;
				cout<<"Intente Nuevamente"<<endl;
				cout<<"\n";	
				continue;	
	    }
	break;
	}
	
	getch();
	return 0;
}
