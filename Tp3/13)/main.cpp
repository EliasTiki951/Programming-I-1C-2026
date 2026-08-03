// 13.Año bisiesto (simplificado)
// Ingresar un año y determinar si es divisible por 4. 

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Anio, M;
	
	cout<<"Ingrese un Año: ";
	cin>>Anio;
	
	//El operador % (módulo) solo funciona con 
	//números enteros (int, long, long long, etc.).
	M = Anio % 4;
	
	if(M==0){
		cout<<"Es un Año Bisiesto"<<endl;
	}else{
		cout<<"No es un Año Bisiesto"<<endl;
	}
	
	getch();
	return 0;
}
