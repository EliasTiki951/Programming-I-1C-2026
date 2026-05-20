// 8) Realizar un programa que solicite al usuario el precio de un producto y el
// porcentaje de descuento aplicado. El programa debe calcular y mostrar:
// • El monto del descuento
// • El precio final a pagar

#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	
	float precio;
	float des;
	float final;
	float monto;
	
	cout<<"-----CAJERO-----"<<endl;
	cout<<"Precio en pesos del producto: ";
	cin>>precio;
	cout<<"Cuanto es el porcentaje de descuento aplicado? ";
	cin>>des;
	
	monto = (precio*des)/100;
	final = precio-monto;
	
	cout<<endl;
	cout<<"El producto vale "<<precio<<" y se aplica el descuento del "<<des<<"%"<<endl;
	cout<<"El monto del descuento es "<<monto<<" pesos."<<endl;
	cout<<"El precio a pagar en total es "<<final<<" pesos."<<endl;
	
	getch();
	return 0;
}
