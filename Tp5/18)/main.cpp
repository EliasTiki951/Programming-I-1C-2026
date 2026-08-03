// 18) Simular un menú simple (sumar, restar, salir) 
// que se repita usando while hasta que el usuario elija salir. 

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Opc;
	double Num1, Num2, Suma, Resta;
	
	while(true){
		cout<<"Menú Simple"<<endl;
		cout<<"1. Suma"<<endl;
		cout<<"2. Resta"<<endl;
		cout<<"3. Salir"<<endl;
		cin>>Opc;
		
		switch(Opc){
			case 1:
				cout<<"\n";
				cout<<"Primer Número: ";
				cin>>Num1;
				cout<<"Segundo Número: ";
				cin>>Num2;
				Suma = Num1 + Num2;
				cout<<Num1<<" + "<<Num2<<" = "<<Suma<<endl;
				cout<<"\n";
				continue;
			case 2:
				cout<<"\n";
				cout<<"Primer Número: ";
				cin>>Num1;
				cout<<"Segundo Número: ";
				cin>>Num2;
				Resta = Num1 - Num2;
				cout<<Num1<<" - "<<Num2<<" = "<<Resta<<endl;
				cout<<"\n";
				continue;
			case 3:
				cout<<"Saliendo..."<<endl;
				return 0;
			default:
				cout<<"Opción Incorrecta"<<endl;
				cout<<"Elija de nuevo"<<endl;
				cout<<"\n";
				continue;
		}
	}
	
	getch();
	return 0;
}
