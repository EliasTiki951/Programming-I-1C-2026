// 18) Validación de opción de menú
// Mostrar menú (1–4).
// Si el usuario ingresa una opción inválida, mostrar error.
// Volver a pedir opción una segunda vez.

#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Opc;
	
	while(true){
		cout<<"Menú"<<endl;
		cout<<"Elija una opción del 1-4: ";
		cin>>Opc;
		
		switch(Opc){
			case 1:
				cout<<"Opción elegida fue "<<Opc<<endl;
				break;
			case 2:
				cout<<"Opción elegida fue "<<Opc<<endl;
				break;
			case 3:
				cout<<"Opción elegida fue "<<Opc<<endl;
				break;
			case 4:
				cout<<"Opción elegida fue "<<Opc<<endl;
				break;
			default:
				cout<<"Error, elija de nuevo"<<endl;
				cout<<"\n";
				continue;
		}
		break;
	}
	
	cout<<"Gracias"<<endl;
	
	getch();
	return 0;
}
