// 9) Realizar un programa que solicite al usuario 
// un numero y calcule la raíz cuadrada del mismo.

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cmath> //Para funciones matematicas // Necesaria para sqrt()
using namespace std;

// sqrt(numero) = Raíces cuadradas.
// cbrt(valor) = Raíces Cúbicas.

int main() {
	
	float num1;
	float resultado;
	
	cout<<"-----LA RAIZ CUADRADA DE UN NUMERO-----"<<endl;
	cout<<"Escriba el numero a calcular: ";
	cin>>num1;
	
	resultado = sqrt(num1);
	
	cout<<"La raiz cuadrada de "<<num1<<" es: "<<resultado<<endl;
	
	getch();
	return 0;
}
