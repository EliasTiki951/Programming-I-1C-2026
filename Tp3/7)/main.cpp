// 7. El mayor de tres números
// Ingresar tres números y mostrar cuál es el mayor.

#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	double Num1, Num2, Num3;
	
	cout<<"Ingrese el Número 1: ";
	cin>>Num1;
	cout<<"Ingrese el Número 2: ";
	cin>>Num2;
	cout<<"Ingrese el Número 3: ";
	cin>>Num3;
	cout<<"\n";
	
	if(Num1>=Num2 && Num1>=Num3){
		cout<<"El número Mayor es: "<<Num1<<endl;
	}else if(Num2>=Num1 && Num2>=Num3){
		cout<<"El número Mayor es: "<<Num2<<endl;
	}else{
		cout<<"El número Mayor es: "<<Num3<<endl;
	}
	
	getch();
	return 0;
}
