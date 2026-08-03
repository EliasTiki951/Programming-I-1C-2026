// 11) Acceso a descuento
// Ingresar edad y monto de compra.
// El cliente tiene descuento si es mayor de 60 o si la compra supera $50.000. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int edad;
	float monto;
	float total;
	
	cout<<"===================="<<endl;
	cout<<" ACCESO A DESCUENTO "<<endl;
	cout<<"===================="<<endl;
	cout<<endl;
	
	cout<<"Ingrese su edad: ";
	cin>>edad;
	cout<<"Ingrese su monto: ";
	cin>>monto;
	
	if(edad>=60 && monto>50000){
		total=monto-(monto*20)/100;
		cout<<"Total a Pagar: "<<total<<" pesos.";
	}else{
		total=monto;
		cout<<"Total a Pagar: "<<total<<" pesos.";
	}
	
	getch();
	return 0;
}
