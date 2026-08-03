// 3) Pedir 10 números utilizando un contador 
// con while y mostrar cuántos son positivos.

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish"); //Tildes y ñ
	
	int Num;
	int Cont = 1;
	int Posi = 0;
	
	while(Cont<=10){
		cout<<"Ingrese un número: ";
		cin>>Num;
		if(Num>0){
			Posi = Posi + 1;
		}
		Cont = Cont + 1;
	}
	
	cout<<"La Cantidad de números positivos son "<<Posi<<endl;
	
	getch();
	return 0;
}
