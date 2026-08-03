// 6) Clasificación de nota
// Ingresar una nota y mostrar:
// • “Excelente” (>=9)
// • “Muy bueno” (7–8)
// • “Aprobado” (6)
// • “Desaprobado” (<6) 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int nota;
	
	cout<<"============"<<endl;
	cout<<"    NOTA    "<<endl;
	cout<<"============"<<endl;
	cout<<endl;
	
	cout<<"Escriba la nota de tu examen: ";
	cin>>nota;
	
	if(nota<0){
		cout<<"Mentiroso."<<endl;
	}else if(nota<6){
		cout<<"Desaprobado."<<endl;
	}else if(nota==6){
		cout<<"Aprobado."<<endl;
	}else if(nota<=8){
		cout<<"Muy bueno."<<endl;
	}else if(nota<=10){
		cout<<"Exelente."<<endl;
	}else{
		cout<<"Mentiroso."<<endl;
	}
	
	getch();
	return 0;
}
