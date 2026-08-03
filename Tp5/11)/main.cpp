// 11) Pedir 5 notas usando un contador con while 
// y mostrar cuántas están aprobadas (nota >= 6). 

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int C = 0;
	int A = 0;
	int S = 0;
	int Not;
	
	while(C<5){
		C = C + 1;
		cout<<C<<". Ingrese la nota del Parcial: ";
		cin>>Not;
		
		if(Not<0 || Not>10){
			cout<<"Nota Inválida."<<endl;
			C = C - 1;
		}else{
			if(Not>=6){
				S = S + 1;
			}
		}
	}
	
	cout<<"La Cantidad de notas aprobadas son "<<S<<endl;
	
	getch();
	return 0;
}
