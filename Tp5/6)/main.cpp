// 6) Solicitar una contraseña y permitir hasta 3 intentos 
// usando while; informar si el acceso fue correcto. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Con = "ELI";
	int C = 1;
	string Contra;
	
	cout<<"Usuario Correcto"<<endl;
	cout<<endl;
	cout<<"Escriba la contraseña: ";
	cin>>Contra;
	
	while(Contra!=Con && C<3){
		C = C + 1;
		cout<<"Contraceña Incorrecta. Intento "<<C<<": ";
		cin>>Contra;
	}
	
	if(Contra==Con){
		cout<<"Contraseña Correcta."<<endl;
	}else{
		cout<<"Cuenta Bloqueada."<<endl;
	}
	
	getch();
	return 0;
}
