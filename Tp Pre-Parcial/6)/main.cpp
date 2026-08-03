// 6) Producción y ventas
// Una fábrica registró la cantidad de productos vendidos de 20 artículos distintos.
// El programa debe:
//  • Cargar:
//    • nombre del producto,
//    • cantidad vendida,
//    • precio unitario.
//  • Luego calcular y mostrar:
//    • recaudación total por producto,
//    • producto más vendido,
//    • producto que más dinero generó,
//    • total general recaudado,
//    • promedio de ventas,
//    • cuántos productos vendieron menos de 50 unidades,
//    • mostrar productos cuya recaudación fue superior al promedio general.

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Nom[20];
	double Can[20];
	double PreU[20];
	double ProTo[20];
	double Total = 0;
	string NomPMV, NomPMDG;
	double ProMV, PMDG, Prom;
	int CM = 0;
	
	for(int i=0; i<20; i++){
		cout<<i+1<<". Ingrese el nombre del Producto: ";
		getline(cin, Nom[i]);
		cout<<"Ingrese la cantiad Vendida: ";
		cin>>Can[i];
		cout<<"Precio Unitario: ";
		cin>>PreU[i];
		
		cin.ignore();
		cout<<"\n";
		
		ProTo[i] = Can[i]*PreU[i];
		Total = Total + ProTo[i];
		
		if(i==0){
			NomPMV = Nom[i];
			ProMV = Can[i];
			NomPMDG = Nom[i];
			PMDG = ProTo[i];
		}
		
		if(Can[i]>ProMV){
			NomPMV = Nom[i];
			ProMV = Can[i];
		}
		
		if(ProTo[i]>PMDG){
			NomPMDG = Nom[i];
			PMDG = ProTo[i];
		}
	}
	
	Prom = Total/20;
	
	for(int i=0; i<20; i++){
		cout<<i<<". El Producto "<<Nom[i]<<" tuvo una recaudación total de $"<<ProTo[i]<<endl;
		
		if(Can[i]<50){
			CM++;
		}
	}
	
	cout<<"\n";
	cout<<NomPMV<<" es el Producto más vendido con "<<ProMV<<" unidades vendidas."<<endl;
	cout<<NomPMDG<<" es el Producto que más dinero generó con $"<<PMDG<<endl;
	cout<<"El Total general Recaudado es de $"<<Total<<endl;
	cout<<"El Promedio de las Ventas es de "<<Prom<<endl;
	cout<<CM<<" Prodcutos se vendieron menos de 50 unidades."<<endl;
	cout<<"\n";
	cout<<"Los productos cuya racaudación fue superior al promedio general son: "<<endl;
	
	for(int i=0; i<20; i++){
		if(ProTo[i]>Prom){
			cout<<"- "<<Nom[i]<<" con $"<<ProTo[i]<<endl;
		}
	}
	
	getch();
	return 0;
}
