// 14) Determinación de tipo de número
// Ingresar un número entero.
// Determinar si es:
// 1. Positivo o negativo
// 2. Par o impar
// 3. Múltiplo de 5

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int num1;
	
	cout<<"Ingrese un numero entero: ";
	cin>>num1;
	cout<<endl;
	
	cout<<"1. El numero es: ";
	if(num1<0){
		cout<<"Negativo."<<endl;
	}else if(num1>0){
		cout<<"Positivo."<<endl;
	}else{
		cout<<"Cero."<<endl;
	}
	
	cout<<"2. El numero es: ";
	if(num1 % 2 == 0){
		cout<<"Par."<<endl;
	}else{
		cout<<"Impar."<<endl;
	}
	
	cout<<"3. El numero: ";
	if(num1 % 5 == 0){
		cout<<"SI es multiplo de 5."<<endl;
	}else{
		cout<<"No es multiplo de 5."<<endl;
	}
	
	getch();
	return 0;
}
