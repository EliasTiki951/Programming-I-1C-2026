#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int Opc;
	string Nom;
	
	while(true){
		cout<<"==============\n";
		cout<<"     MENÚ     \n";
		cout<<"==============\n";
		cout<<"\n";
		cout<<"1. Saludar\n";
		cout<<"2. Mostrar fecha ficticia\n";
		cout<<"3. Salir"<<endl;
		cout<<"\n";
		cout<<"Elija una opción: ";
		cin>>Opc;
		
		switch(Opc){
			case 1:
				cout<<"Hola...";
				cout<<"¿Como te llamas? ";
				cin>>Nom;
				cout<<"\n";
				cout<<"Hola "<<Nom<<endl;
				cout<<"\n";
				break;
			
			case 2:
				cout<<"39/06/5428"<<endl;
				break;
			
			case 3:
				return 0;
				break;
		}
	}
	
	getch();
	return 0;
}
