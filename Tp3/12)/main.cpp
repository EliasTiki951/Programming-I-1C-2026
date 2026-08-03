// 12.Acceso a sistema
// Ingresar usuario y contraseña.
// Mostrar “Acceso concedido” solo si ambos 
// coinciden con valores predefinidos. 

#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Usuario = "EliasTiki";
	string Contrasena = "2953";
	string U, C;
	
	while(true){
		cout<<"====================="<<endl;
		cout<<"  Inicio de Sección  "<<endl;
		cout<<"====================="<<endl;
		cout<<"Ingrese el Usuario: ";
		getline(cin, U);
		cout<<"Ingrese la Contraseña: ";
		getline(cin, C);
		
		if(U==Usuario && C==Contrasena){
			cout<<"Acceso Concedido"<<endl;
			cout<<"Bienvenido al Sistema..."<<endl;
		}else{
			cout<<"Acceso Denegado"<<endl;
			cout<<"Intente de nuevo..."<<endl;
			cout<<"\n";
			continue;
		}
		break;
	}
	
	getch();
	return 0;
}
