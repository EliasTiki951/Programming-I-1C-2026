// 1) Realizar un programa que solicite al usuario dos números enteros y
//    muestre por pantalla la suma de ambos valores.

#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	int Num1;
	int Num2;
	int Resul;
	
	cout<<"-----SUMA DE 2 NUMEROS ENTEROS-----"<<endl;
	cout<<"Pon el primer numero: ";
	cin>>Num1;
	cout<<"Pon el segundo numero: ";
	cin>>Num2;
	
	Resul=Num1+Num2;
	
	cout<<Num1<<" + "<<Num2<<" es "<<Resul<<endl;
	
	getch();
	return 0;
}
