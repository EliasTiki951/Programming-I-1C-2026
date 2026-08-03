// 3. Factura Simple
// Ingresar: Nombre del producto, Precio unitario, Cantidad
// Calcular el total a pagar y mostrar una factura simple.

#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Nom;
	double Pre, Total;
	int Can;
	
	cout<<"Nombre del Producto: ";
	getline(cin, Nom);
	cout<<"Precio Unitario: ";
	cin>>Pre;
	cout<<"Cantidad: ";
	cin>>Can;
	
	Total = Pre*Can;
	
	cout<<"\n";
	cout<<"==========="<<endl;
	cout<<"  INFORME  "<<endl;
	cout<<"==========="<<endl;
	cout<<"Nombre del Producto: "<<Nom<<endl;
	cout<<"Precio: $"<<Pre<<endl;
	cout<<"Cantidad: "<<Can<<endl;
	cout<<"Total a Pagar: $"<<Total<<endl;
	
	getch();
	return 0;
}
