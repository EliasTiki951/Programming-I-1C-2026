// 13) Pedir números hasta que se ingrese 0 y 
// contar cuántos son pares y cuántos impares.

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int P = 0;
	int I = 0;
	int Num;
	
	do{
		cout<<"Ingrese un Número Entero: ";
		cin>>Num;
		
		if(Num != 0){
			if(Num%2 == 0){
				P = P + 1;
			}else{
				I = I + 1;
			}
		}
		
	}while(Num != 0);
	
	cout<<"Los números Pares ingresados son "<<P<<endl;
	cout<<"Los números Impares ingresados son "<<I<<endl;
	
	getch();
	return 0;
}
