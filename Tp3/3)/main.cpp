// 3) Número mayor
// Ingresar dos números y mostrar cuál es mayor. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	float num1;
	float num2;
	
	cout<<"==================="<<endl;
	cout<<"    2 NUMEROS      "<<endl;
	cout<<"==================="<<endl;
	cout<<endl;
	
	cout<<"Escribe el primer numero: ";
	cin>>num1;
	cout<<"Escribe el segundo numero: ";
	cin>>num2;
	
	if(num1<num2){
		cout<<"El numero "<<num2<<" es el mas grande.";
	}else{
		cout<<"El numero "<<num1<<" es el mas grande.";
	}
	
	getch();
	return 0;
}
