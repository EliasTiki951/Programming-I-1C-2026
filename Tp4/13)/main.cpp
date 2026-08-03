// 13) Sistema de tarifas eléctricas
// Ingresar consumo mensual y tipo de usuario.
// Calcular monto según combinación.

#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	float Mensu, Desc, Total;
	int Tipo;
	
	cout<<"Ingrese consumo mensual: ";
	cin>>Mensu;
	
	while(true){
		cout<<"Ingrese tipo de Usuario: ";
		cin>>Tipo;
		
		switch(Tipo){
			case 1:
				cout<<"Descuento del 10%"<<endl;
				Desc = Mensu*0.10;
				Total = Mensu - Desc;
				break;
			case 2:
				cout<<"Descuento del 20%"<<endl;
				Desc = Mensu*0.20;
				Total = Mensu - Desc;
				break;
			case 3:
				cout<<"Descuento del 30%"<<endl;
				Desc = Mensu*0.30;
				Total = Mensu - Desc;
				break;
			default:
				cout<<"Error... elija de nuevo"<<endl;
				cout<<"\n";
				continue;
		}
		break;
	}
	
	cout<<"El total es de $"<<Total<<endl;
	
	getch();
	return 0;
}
