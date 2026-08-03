// 16) Validación de nota
// Ingresar 3 notas y posteriormente calcular el promedio,
// En cada ingreso de nota, verificar que valga entre 0 y 10
// Si el promedio es mayor a 6, imprimir “Aprobado”, 
// en caso contrario, imprimir “Desaprobado”

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int N1, N2, N3;
	float Prom;
	
	while(true){
		cout<<"Ingresa tu primera nota: ";
		cin>>N1;
		
		if(N1<1 || N1>10){
			cout<<"Nota Inválida..."<<endl;
			cout<<"\n";
			continue;
		}
		break;
	}
	
	cout<<"\n";
	
	while(true){
		cout<<"Ingresa tu segunda nota: ";
		cin>>N2;
		
		if(N2<1 || N2>10){
			cout<<"Nota Inválida..."<<endl;
			cout<<"\n";
			continue;
		}
		break;
	}
	
	cout<<"\n";
	
	while(true){
		cout<<"Ingresa tu tercera nota: ";
		cin>>N3;
		
		if(N3<1 || N3>10){
			cout<<"Nota Inválida..."<<endl;
			cout<<"\n";
			continue;
		}
		break;
	}
	
	cout<<"\n";
	
	Prom = (N1+N2+N3)/3;
	
	cout<<"Tu nota promedio es "<<Prom<<endl;
	
	if(Prom>6){
		cout<<"Aprobado"<<endl;
	}else{
		cout<<"Desaprobado"<<endl;
	}
	
	getch();
	return 0;
}
