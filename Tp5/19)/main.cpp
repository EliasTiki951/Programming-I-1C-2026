// 19) Ingresar números hasta que se escriba un número 
// negativo y mostrar cuántos números se ingresaron. 

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int CP = 0;
	double Num1;
	
	do{
		cout<<"Ingrese un número: ";
		cin>>Num1;
		
		if(Num1>-1){
			CP++;
		}
		
	}while(Num1>-1);
	
	cout<<"Se ingresaron "<<CP<<" números."<<endl;
	
	getch();
	return 0;
}
