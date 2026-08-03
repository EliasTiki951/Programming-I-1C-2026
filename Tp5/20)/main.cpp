// 20) Simular un cajero automático donde se permita retirar dinero 
// mientras haya saldo disponible y el usuario no elija salir. 

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	long double Sal = 10000, Retiro, Deposito;
	int Opc;
	
	while(true){
		cout<<"Cajero Automático"<<endl;
		cout<<"1. Retiro Dinero"<<endl;
		cout<<"2. Depositar Dinero"<<endl;
		cout<<"3. Ver Saldo disponible"<<endl;
		cout<<"4. Salir"<<endl;
		cin>>Opc;
		
		switch(Opc){
			case 1:
				cout<<"\n";
				cout<<"¿Cuanto desea retirar? ";
				cin>>Retiro;
				Sal = Sal - Retiro;
				cout<<"Se a retirado con exito"<<endl;
				cout<<"\n";
				continue;
			case 2:
				cout<<"\n";
				cout<<"¿Cuanto desea depositar? ";
				cin>>Deposito;
				Sal = Sal + Deposito;
				cout<<"Se a depositado con exito"<<endl;
				cout<<"\n";
				continue;
			case 3:
				cout<<"\n";
				cout<<"Su saldo es de $"<<Sal<<endl;
				cout<<"\n";
				continue;
			case 4:
				cout<<"Saliendo..."<<endl;
				return 0;
			default:
				cout<<"\n";
				cout<<"Opción Incorrecta"<<endl;
				cout<<"Elija de nuevo"<<endl;
				cout<<"\n";
				continue;
		}
	}
	
	getch();
	return 0;
}
