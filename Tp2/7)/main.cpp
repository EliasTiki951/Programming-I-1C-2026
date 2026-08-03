// 7. Inscripción a Carrera
// Ingresar: Nombre del estudiante, Edad, Cantidad de materias,
// Precio por materia.
// Calcular el costo total de la Carrera.

#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Nom, Carr;
	int Edad, Can;
	float Pre, Cost;
	
	cout<<"========================="<<endl;
	cout<<"  INSCRIPCIÓN A CARRERA  "<<endl;
	cout<<"========================="<<endl;
	cout<<"Carrera a Inscribirse: ";
	getline(cin, Carr);
	cout<<"Nombre del Estudiante: ";
	getline(cin, Nom);
	cout<<"Edad: ";
	cin>>Edad;
	cout<<"Cantidad de Materias: ";
	cin>>Can;
	cout<<"Precio por Materia: ";
	cin>>Pre;
	
	Cost = Can*Pre;
	
	cout<<"\n";
	cout<<"==========="<<endl;
	cout<<"  INFORME  "<<endl;
	cout<<"==========="<<endl;
	cout<<"Carrera: "<<Carr<<endl;
	cout<<"Nombre del Estudiante: "<<Nom<<endl;
	cout<<"Edad: "<<Edad<<endl;
	cout<<"Cantidad de Materias: "<<Can<<endl;
	cout<<"Precio por Materia: $"<<Pre<<endl;
	cout<<"El costo total de la Carrera: $"<<Cost<<endl;
	
	getch();
	return 0;
}
