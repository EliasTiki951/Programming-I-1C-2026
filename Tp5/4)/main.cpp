// 4) Ingresar un número y mostrar su tabla de 
// multiplicar del 1 al 10 usando while. 

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Num1;
	int C = 1;
	int R;
	
	cout<<"Escriba un número entero: ";
	cin>>Num1;
	
	cout<<"La Tabla del "<<Num1<<" es:"<<endl;
	cout<<endl;
	
	while(C<=10){
		R = Num1*C;
		cout<<Num1<<" * "<<C<<" = "<<R<<endl;
		C = C+1;
	}
	
	getch();
	return 0;
}
