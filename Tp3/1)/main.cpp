// 1) Número positivo o negativo
// Ingresar un número e indicar si es positivo o negativo. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	float num;
	
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	if (num == 0){
		cout<<"El numero elegido es 0.";
	}else if (num < 0){
		cout<<"El numero "<<num<<" es NEGATIVO.";
	}else{
		cout<<"El numero "<<num<<" es POSITIVO.";
	}
	
	getch();
	return 0;
}
