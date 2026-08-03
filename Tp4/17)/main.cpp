// 17) Ingreso de contraseña con 3 intentos manuales
// Permitir ingresar contraseña.
// Si es incorrecta, permitir volver a intentar hasta 3 veces

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Contra = "Tuchiquibaby123";
	string Co;
	int C = 1;
	
	cout<<"Usuario Confirmado"<<endl;
	
	while(true){
		
		cout<<"Ingrese su Contraseña: ";
		getline(cin, Co);
		
		if(Co==Contra){
			cout<<"Contraseña Correcta"<<endl;
			return 0;
		}else{
			cout<<"Contraseña Incorrecta"<<endl;
			if(C==3){
				cout<<"Acceso Bloqueado"<<endl;
				return 0;
			}
			cout<<"Ingrese nuevamente..."<<endl;
			C++;
			cout<<"\n";
			cout<<"Intento "<<C<<endl;
			continue;
		}	
	}
	
	getch();
	return 0;
}
