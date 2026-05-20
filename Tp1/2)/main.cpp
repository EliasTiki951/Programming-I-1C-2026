// 2) Realizar un programa que solicite al usuario 
// dos números y muestre por pantalla:
// • La suma
// • La resta
// • La multiplicación
// • La división

#include <iostream> //Libreria por defecto
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	float num1;
	float num2;
	float suma;
	float resta;
	float multi;
	float divi;
	
	cout<<"-----MINI CALCULADORA-----"<<endl;
	cout<<"Escribe el primer numero: "; cin>>num1;
	cout<<"Escribe el segundo numero: "; cin>>num2;
	
	suma= num1+num2;
	resta= num1-num2;
	multi= num1*num2;
	divi= num1/num2;
	
	cout<<num1<<"+"<<num2<<"="<<suma<<endl;
	cout<<num1<<"-"<<num2<<"="<<resta<<endl;
	cout<<num1<<"*"<<num2<<"="<<multi<<endl;
	cout<<num1<<"/"<<num2<<"="<<divi<<endl;
	
	getch();
	return 0;
}
