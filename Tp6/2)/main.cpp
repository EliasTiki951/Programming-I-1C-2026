// 2) Productos vendidos
// Se registraron 8 productos.
// Por cada uno se ingresa:
//    • Precio unitario.
//    • Cantidad vendida.
// Determinar:
//    • Recaudación total general.
//    • Producto que generó mayor recaudación (precio × cantidad).
//    • Cuántos productos vendieron más de 10 unidades. 

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int C = 0, Can;
	double 	Pro = 0, Total = 0, Mr = 0, Pre;
	string Nom, Name;
	
	for(int i=1; i<=8; i++){
		cout<<i<<". Nombre del Producto: ";
		cin>>Nom;
		
		cout<<"Precio unitario del Producto: ";
		cin>>Pre;
		
		cout<<"Cantidad Vendida: ";
		cin>>Can;
		
		Pro = Pre*Can;
		Total += Pro;
		
		if(i==1){
			Name = Nom;
			Mr = Pro;
		}else{
			if(Pro>Mr){
				Name = Nom;
				Mr = Pro;
			}
		}
		
		if(Can>10){
			C++;
		}
		
		cout<<"\n";
	}
	
	cout<<"\n";
	cout<<"La Recaudación Total General es de $"<<Total<<endl;
	cout<<"El Producto "<<Name<<" generó mayor recaudación con $"<<Mr<<endl;
	cout<<C<<" producto se vendieron más de 10 Unidades."<<endl;
	
	getch();
	return 0;
}
