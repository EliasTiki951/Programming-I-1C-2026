// 10) Ingresar números hasta que el usuario 
// escriba 999 y mostrar el mayor valor ingresado. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Num1 = 0;
	int Num;
	
	do{
		cout<<"Ingrese un número entero: ";
		cin>>Num;
		
		if(Num>Num1 && Num!=999){
			Num1 = Num;
		}
		
	}while(Num!=999);
	
	cout<<"El mayor valor ingresado es "<<Num1<<endl;
	
	getch();
	return 0;
}
