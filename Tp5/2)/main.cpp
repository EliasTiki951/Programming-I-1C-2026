// 2) Ingresar números hasta que el usuario escriba 0 y mostrar la suma total. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int N;
	int S=0;
	
	cout<<"Ingrese un número: ";
	cin>>N;
	
	//Ejercicio con While
	while (N!=0){
		S = S+N;
		cout<<"Ingrese un número: ";
		cin>>N;
	}
	cout<<"La suma total es: "<<S<<endl;
	
	/*
	
	//Ejercicio con Do While
	do{
		S = S + N;
		cout<<"Ingrese un número: ";
		cin>>N;
	}while(N!=0);
	
	cout<<"La suma total es: "<<S<<endl;
	
	*/
	
	getch();
	return 0;
}
