// 6) Realizar un programa que solicite al usuario:
// • un porcentaje
// • un número total
// El programa debe calcular cuánto representa ese porcentaje del número
// ingresado y mostrar el resultado por pantalla. Por ejemplo, si el usuario
// ingresa 20 como porcentaje y 150 como número total, el programa
// deberá calcular cuánto es el 20% de 150.


#include <iostream> //Libreria por defecto
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	
	float porcen;
	float num1;
	float total;
	
	cout<<"-----CALCULA EL PORCENTAJE DE UN NUMERO-----"<<endl;
	cout<<"Ponga el numero: ";
	cin>>num1;
	cout<<"Ponga el porcentaje: ";
	cin>>porcen;
	
	total= (num1*porcen)/100;
	
	cout<<"El "<<porcen<<"% de "<<num1<<" es "<<total<<endl;
	
	getch();
	return 0;
}
