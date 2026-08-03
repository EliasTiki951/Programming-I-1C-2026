// 14.Triángulo válido
// Ingresar tres lados y verificar si pueden formar un triángulo
// (la suma de dos lados debe ser mayor al tercero). 

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	double La1, La2, La3;
	
	cout<<"Ingrese tamaño del lado 1: ";
	cin>>La1;
	
	cout<<"Ingrese tamaño del lado 2: ";
	cin>>La2;
	
	cout<<"Ingrese tamaño del lado 3: ";
	cin>>La3;
	
	if(La1+La2>La3  && La2+La3>La1  && La1+La3>La2){
		cout<<"Si forma un Triángulo."<<endl;
	}else{
		cout<<"No forma un Triángulo."<<endl;
	}
	
	getch();
	return 0;
}
