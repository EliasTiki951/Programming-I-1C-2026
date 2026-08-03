// 12) Año bisiesto
// Determinar si un año es bisiesto considerando:
// 1. Divisible por 4
// 2. No divisible por 100, excepto si es divisible por 400

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int anio;
	
	cout<<"Ingrese un año: ";
	cin>>anio;
	
	if((anio%4==0 && anio%100!=0) || (anio%400==0)){
		cout<<"Es un año bisiesto."<<endl;
	}else{
		cout<<"No es un año bisiesto."<<endl;
	}
	
	getch();
	return 0;
}
