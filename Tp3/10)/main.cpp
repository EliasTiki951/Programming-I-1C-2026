// 10) Validación de rango
// Ingresar un número y verificar si está dentro del rango 10–20.
// Mostrar “Dentro del rango” o “Fuera del rango”. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	float num1;
	
	cout<<"==============="<<endl;
	cout<<"     RANGO     "<<endl;
	cout<<"==============="<<endl;
	cout<<endl;
	
	cout<<"Escriba un numero: ";
	cin>>num1;
	
	if(num1>=10 & num1<=20){
		cout<<"Dentro del rango."<<endl;
	}else{
		cout<<"Fuera del rango."<<endl;
	}
	
	getch();
	return 0;
}
