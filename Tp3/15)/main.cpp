// 15.Número de dos cifras
// Ingresar un número y verificar si tiene exactamente dos cifras
// (entre 10 y 99 o entre -10 y -99). 

#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Num;
	
	cout<<"Ingrese un número: ";
	cin>>Num;
	
	if(Num>=10 && Num<=99){
		cout<<"Es un número de 2 cifras."<<endl;
	}else if(Num<=-10 && Num>=-99){
		cout<<"Es un número de 2 cifras."<<endl;
	}else{
		cout<<"No es un número de 2 cifras."<<endl;
	}
	
	getch();
	return 0;
}
