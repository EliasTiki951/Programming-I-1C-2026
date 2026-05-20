// 10) Realizar un programa que solicite al usuario dos números y los
// almacene en las variables A y B. El programa debe intercambiar los
// valores de ambas variables y luego mostrar por pantalla los nuevos
// valores almacenados en A y B.

#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	
	float A;
	float B;
	float temp;
	
	cout<<"Ingrese el valor para A: ";
	cin>>A;
	cout<<"Ingrese el valor para B: ";
	cin>>B;
	
	cout<<"Valores originales:"<<endl;
    cout<<"A = "<<A<<endl;
    cout<<"B = "<<B<<endl;
	
	//Intercambio los valores
	temp = A;
	A = B;
	B = temp;
	
	cout<<"Nuevos Valores:"<<endl;
    cout<<"A = "<<A<<endl;
    cout<<"B = "<<B<<endl;
	
	getch();
	return 0;
}
