// 4) Número par o impar
// Ingresar un número e indicar si es par o impar. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int num1;
	
	cout<<"===================="<<endl;
	cout<<" NUMERO PAR O IMPAR "<<endl;
	cout<<"===================="<<endl;
	cout<<endl;
	cout<<"Escriba un numero: ";
	cin>>num1;
	
	if(num1 % 2 == 0){
		cout<<"El numero "<<num1<<" es Par."<<endl;
	}else{
		cout<<"El numero "<<num1<<" es Impar."<<endl;
	}
	
	getch();
	return 0;
}
