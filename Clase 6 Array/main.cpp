#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	
	/*
	// Array de 5 elementos
	int notas[5] = {7, 9, 6, 8, 10};
	
	cout<<"Notas: ";
	for(int i=0; i<5; i++){
		cout<<notas[i]<<endl;
	}
	*/
	
	int notas[20];
	int suma = 0;
	int apro = 0;
	float aprosuma = 0;
	float aproProm = 0;
	int desa = 0;
	float desaProm = 0;
	float desasuma = 0;
	
	// Carga de Datos
	for(int i=0; i<20; i++){
		cout<<notas[i]<<". Escriba la Nota: ";
		cin>>notas[i];
		
		if(notas[i]<0 || notas[i]>10){
			cout<<"Nota Inválida"<<endl;
		}
		
		if(notas[i] >= 6){
			aprosuma += notas[i];
			apro++;
		}else{
			desasuma += notas[i];
			desa++;
		}
		
	}
	
	// Acumulación
	for(int i=0; i<20; i++){
		suma+=notas[i];
	}
	
	// Cálculo del promedio
	double promedio = (double) suma /20;
	aproProm = aprosuma/apro;
	desaProm = desasuma/desa;
	
	cout<<"Promedio del curso: "<<promedio<<endl;
	cout<<"La cantidad de Aprobados son: "<<apro<<" alumnos."<<endl;
	cout<<"El Promedio de los Aprobados son: "<<aproProm<<endl;
	cout<<"La cantidad de Desaprobados son: "<<desa<<" alumnos."<<endl;
	cout<<"El Promedio de los Desaprobados son: "<<desaProm<<endl;
	
	getch();
	return 0;
}
