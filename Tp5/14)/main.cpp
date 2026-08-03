// 14) Simular el ingreso a un sistema donde se pida 
// usuario y contraseña hasta que los datos sean correctos. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Usu;
	string Con;
	int Opc;
	string Us;
	string Co;
	
	cout<<"======================="<<endl;
	cout<<" BIENVENIDO AL SISTEMA "<<endl;
	cout<<"======================="<<endl;
	cout<<endl;
	cout<<"Crea tu Usuario: ";
	getline(cin, Usu);
	cout<<"Crea tu Contraseña: ";
	getline(cin, Con);
	cout<<endl;
	cout<<"Datos Guardados con Exito..."<<endl;
	cout<<endl;
	
	do{
		cout<<"1. Iniciar Sección"<<endl;
		cout<<"2. Cerra Aplicación"<<endl;
		cout<<endl;
		cout<<"Elija una Opción: ";
		cin>>Opc;
		cout<<endl;
		
		switch(Opc){
			
			case 1:
				cin.ignore(); //Limpia el Buffer el \n que quedó de cin>>Opc
				cout<<"================="<<endl;
				cout<<"     SISTEMA     "<<endl;
				cout<<"================="<<endl;
				cout<<endl;
				
				do{
					cout<<"Ingrese Usuario: ";
					getline(cin, Us);
					cout<<"Ingrese Contraseña: ";
					getline(cin, Co);
					
					if(Us != Usu || Co!= Con){
						cout<<"Acceso Denegado. Intente de nuevo..."<<endl;
						cout<<endl;
					}else{
						cout<<"Acceso Permitido"<<endl;
						cout<<endl;
						cout<<"Bienvenido al Sistema..."<<endl;
						cout<<endl;
						return 0;
					}
				}while(Us != Usu || Co!= Con);
				break;
				
			case 2:
				cout<<"Cerrando..."<<endl;
				cout<<endl;
				cout<<"Cerrado con Éxito."<<endl;
				return 0;
				break;
				
			default:
				cout << "Error. Elija otra opción..." << endl;
				break;
		}
	}while(Opc!=2 && Opc!=1);
	
	getch();
	return 0;
}
