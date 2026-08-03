// 1) Clasificación de triángulos
// Ingresar tres lados.
// • Validar si forman triángulo.
// • Determinar si es equilátero, isósceles o escaleno.

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	float l1;
	float l2;
	float l3;
	
	cout<<"=================="<<endl;
	cout<<"    TRIANGULOS    "<<endl;
	cout<<"=================="<<endl;
	cout<<endl;
	
	cout<<"Valor de lado 1: ";
	cin>>l1;
	cout<<"Valor de lado 2: ";
	cin>>l2;
	cout<<"Valor de lado 3: ";
	cin>>l3;
	
	if (l1+l2>l3 && l1+l3>l2 && l2+l3>l1){
		cout<<"Los lados SI forman un triangulo."<<endl;
		if (l1==l2 && l2==l3){
			cout<<"Es un triangulo Equilatero."<<endl;
		}else if(l1==l2 || l1==l3 || l2==l3){
			cout<<"Es un triangulo Isosceles"<<endl;
		}else{
			cout<<"Es un triangulo Escaleno."<<endl;
		}
	}else{
		cout<<"Los lados NO forman un triangulo."<<endl;
	}
	
	getch();
	return 0;
}
