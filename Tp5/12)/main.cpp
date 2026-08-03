// 12) Solicitar nombres de alumnos hasta que se ingrese 
// la palabra "fin" y contar cuántos fueron ingresados. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int C = 0;
	string Nom;
	
	
	do{
		
		C = C + 1;
		cout<<C<<". Ingrese el nombre del Alumno: ";
		getline(cin, Nom);
		
	}while(Nom != "fin");
	
	C = C - 1;
	cout<<"Los Alumnos ingresados son "<<C<<endl;
	
	getch();
	return 0;
}
