// 18.Mes del año
// Ingresar un número (1–12) y mostrar el mes correspondiente usando switch. 

#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Num;
	
	while(true){
		cout<<"Ingrese un Número para el mes (1-12): ";
		cin>>Num;
		
		switch(Num){
			case 1:
				cout<<"Enero"<<endl;
				break;
			case 2:
				cout<<"Febrero"<<endl;
				break;
			case 3:
				cout<<"Marzo"<<endl;
				break;
			case 4:
				cout<<"Abril"<<endl;
				break;
			case 5:
				cout<<"Mayo"<<endl;
				break;
			case 6:
				cout<<"Junio"<<endl;
				break;
			case 7:
				cout<<"Julio"<<endl;
				break;
			case 8:
				cout<<"Agosto"<<endl;
				break;
			case 9:
				cout<<"Septiembre"<<endl;
				break;
			case 10:
				cout<<"Octubre"<<endl;
				break;
			case 11:
				cout<<"Noviembre"<<endl;
				break;
			case 12:
				cout<<"Diciembre"<<endl;
				break;
			default:
				cout<<"Error. Elija otro número."<<endl;
				cout<<"\n";
				continue;	
		}
		break;
	}
	
	getch();
	return 0;
}
