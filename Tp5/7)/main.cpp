// 7) Ingresar un número y 
// calcular su factorial utilizando while. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int C = 0;
	int S = 1;
	int Num;
	
	cout<<"Ingrese un número entero: ";
	cin>>Num;
	
	if(Num<0){
		cout<<"No existe el factorial de un número negativo."<<endl;
	}else{
		while(C<Num){
			C = C + 1;
			S = C*S;
		}
		cout<<"El factorial de "<<Num<<" es "<<S<<endl;
	}
	
	getch();
	return 0;
}
