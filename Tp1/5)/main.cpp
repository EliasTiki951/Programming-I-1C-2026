// 5)Realizar un programa que solicite al usuario tres números 
// y calcule el promedio de los mismos. 
// El programa debe mostrar el resultado por pantalla.

#include <iostream> //Libreria por defecto
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	
	float num1; 
	float num2; 
	float num3;
	float prom;
	
	cout<<"-----PROMEDIO DE 3 NUMEROS-----"<<endl;
	cout<<"Escriba el primer numero: ";
	cin>>num1;
	cout<<"Escriba el segundo numero: ";
	cin>>num2;
	cout<<"Escriba el tercer numero: ";
	cin>>num3;
	
	prom = (num1+num2+num3)/3;
	
	cout<<"El promedio de los 3 numeros es "<<prom<<"."<<endl;
	
	getch();
	return 0;
}
