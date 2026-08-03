// 9) Pedir precios de productos hasta que el usuario 
// ingrese 0 y mostrar el total a pagar.

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int C = 0;
	int S = 0;
	float Pre;
	
	do{
		cout<<"Ingrese Precio del Producto: ";
		cin>>Pre;
		C = C + 1;
		S = S + Pre;
	}while(Pre!=0);
	
	C = C - 1;
	cout<<"Cantidad de Productos: "<<C<<endl;
	cout<<"Precio Total: "<<S<<endl;
	
	getch();
	return 0;
}
