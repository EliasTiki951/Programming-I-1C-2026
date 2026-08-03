// 20) Sistema de acceso con bloqueo
// Ingresar usuario y contraseña.
// • Permitir hasta 3 intentos.
// • Si falla los 3, mostrar “Cuenta bloqueada”.
// • Si acierta en cualquier intento, mostrar “Acceso concedido”.

#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Usua, Contr;
	string Usu = "EliasTiki";
	string Contra = "Tikinidas";
	int C = 1;
	
	cout<<"BIENVENIDO AL SISTEMA"<<endl;
	cout<<"\n";
	
	while(true){
		cout<<"Ingrese Usuario: ";
		getline(cin, Usua);
		cout<<"Ingrese Contraseña: ";
		getline(cin, Contr);
		
		if(Usua!=Usu && Contr!=Contra){
			C++;
			cout<<"Valores Incorrectos"<<endl;
			cout<<"\n";
			if(C<=3){
				cout<<"Intento N°"<<C<<endl;
				continue;
			}
			break;
		}else{
			break;
		}
	}
	
	if(Usua==Usu && Contr==Contra){
		cout<<"Acceso Concedido"<<endl;
		return 0;
    }else{
    	cout<<"Cuenta Bloqueada"<<endl;
    	return 0;
	}
	
	getch();
	return 0;
}
