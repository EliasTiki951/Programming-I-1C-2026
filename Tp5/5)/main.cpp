// 5) Pedir números hasta ingresar uno negativo y 
// mostrar el promedio de los positivos ingresados. 

#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Num2;
	int Num1;
	int T;
	
	cout<<"Ingrese un Número Entero: ";
	cin>>Num2;
	
	if(Num2<0){
		cout<<"El promedio de los números positivos es 0."<<endl;
	}else{
		int S = Num2;
		int C = 1;
		
		do{
			cout<<"Ingrese un Número Entero: ";
			cin>>Num1;
			C = C + 1;
			
			if(Num1>0){
			S = S + Num1;
			}else{
			C = C - 1;
			}
		
		}while(Num1>0);
	
	    T = S/C;
		
		cout<<"El promedio de todos los números positivos es "<<T<<endl;	
	}
	
	getch();
	return 0;
}
