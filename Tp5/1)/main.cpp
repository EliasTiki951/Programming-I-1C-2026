// 1) Pedir un número entero positivo y mostrar 
// los números del 1 hasta ese número usando while.

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");  // Para las tildes y ñ

	int Num1;
	int S;

	cout<<"Ingrese un número: ";
	cin>>Num1;

	if(Num1>0){
		S = 0;
		while(S<Num1){
			S = S + 1;
			cout<<S<<endl;
		}
	}else{
		cout<<"Error"<<endl;
	}

	getch();
	return 0;
}
