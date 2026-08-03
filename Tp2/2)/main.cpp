// 2) Registro de Empleado
// Ingresar: Nombre, Edad, Sueldo básico, Porcentaje de aumento
// Calcular el sueldo final y mostrar todos los datos.

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	string nom;
	int edad;
	float sueldo;
	float por;
	float total;
	
	cout<<"Nombre: ";
	cin>>nom;
	cout<<"Edad: ";
	cin>>edad;
	cout<<"Sueldo basico: ";
	cin>>sueldo;
	cout<<"Porcentaje de aumento: ";
	cin>>por;
	cout<<endl;
	
	total=sueldo+(sueldo*por)/100;
	
	cout<<"======================="<<endl;
	cout<<" REGISTRO DE EMPLEADOS "<<endl;
	cout<<"======================="<<endl;
	cout<<endl;
	cout<<"Nombre: "<<nom<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Sueldo basico: "<<sueldo<<endl;
	cout<<"Porcentaje de aumento: "<<por<<endl;
	cout<<"Sueldo final: "<<total<<endl;
	
	getch();
	return 0;
}
