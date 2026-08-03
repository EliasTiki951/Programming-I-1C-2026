// 1) Ficha de Alumno
// Crear un programa que ingrese:
// Nombre, Apellido, Edad, Altura, Promedio
// Mostrar todos los datos ordenados en formato de ficha.

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>      //Para usar string (texto)
using namespace std;

int main() {
	string nom;
	string ape;
	int edad;
	float altura;
	float prom;
	
	cout<<"Carga de Datos: "<<endl;
	
	cout<<"Nombre: ";
	cin>>nom;
	cout<<"Apellido: ";
	cin>>ape;
	cout<<"Edad: ";
	cin>>edad;
	cout<<"Promedio: ";
	cin>>prom;
	cout<<"Altura: ";
	cin>>altura;
	
	cout<<endl;
	cout<<"========================"<<endl;
	cout<<"  FICHA DEL ESTUDIANTE  "<<endl;
	cout<<"========================"<<endl;
	cout<<endl;
	cout<<"Nombre: "<<nom<<endl;
	cout<<"Apellido: "<<ape<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Altura: "<<altura<<endl;
	cout<<"Promedio: "<<prom<<endl;
	
	getch();
	return 0;
}
