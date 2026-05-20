// 3) Realizar un programa que solicite al usuario su una 
// cantidad de horas y calcule a cuantos segundos equivale

#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	int horas;
	int segundos;
	
	cout<<"-----CALCULADORA DE HORAS A SEGUNDOS-----"<<endl;
	cout<<"Ponga la cantidad de horas: "; cin>>horas;
	
	segundos= horas*60*60;
	
	cout<<horas<<" horas son "<<segundos<<" segundos."<<endl;
	
	getch();
	return 0;
}
