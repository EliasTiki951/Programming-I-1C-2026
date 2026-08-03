// 6) Préstamo bancario
// Ingresar salario y antigüedad laboral.
// Se aprueba si:
// 6.1 Salario > 250.000 y antigüedad >= 2 años
// 6.2 O salario > 400.000

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	int sal;
	int ant;
	
	cout<<"================"<<endl;
	cout<<"    PRESTAMO    "<<endl;
	cout<<"================"<<endl;
	cout<<endl;
	cout<<"Ingrese su salario: ";
	cin>>sal;
	cout<<"Ingrese su antiguedad: ";
	cin>>ant;
	
	if(sal<0 || ant<0){
		cout<<"Mentiroso"<<endl;
	}else if(sal>250000 && ant>=2 || sal>400000){
		cout<<"Prestamo Aprobado."<<endl;
	}else{
		cout<<"Prestamo Desaprobado."<<endl;
	}
	
	getch();
	return 0;
}
