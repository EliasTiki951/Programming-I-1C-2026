#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	double Pre, Vf, Prom, Ca, Cb, Cc, Ta, Tb, Tc;
	
	for (int i=1; i<=15; i++){
		cout<<i<<". Ingrese el precio del Producto: ";
		cin>>Pre;
		
		if(Pre>50000){
			Cc++;
			Tc+=Pre;
		}else{
			if(Pre<10000){
				Ca++;
				Ta+=Pre;
			}else{
				Cb++;
				Tb+=Pre;
			}
		}
	}
	
	cout<<"\n";
	
	if(Ca>=5){
		Ta = Ta*0.25;
		cout<<"Se aplicó un descuento del 25% en la Categoria A: "<<Ta<<endl;
	}
	
	if(Cb>=5){
		Tb = Tb*0.25;
		cout<<"Se aplicó un descuento del 25% en la Categoria B: "<<Tb<<endl;
	}
	
	if(Cc>=5){
		Tc = Tc*0.25;
		cout<<"Se aplicó un descuento del 25% en la Categoria C: "<<Tc<<endl;
	}
	
	Vf = Ta + Tb + Tc;
	Prom = Vf/15;
	cout<<"\n";
	
	cout<<"El Precio Total de todos los productos es de $"<<Vf<<endl;
	cout<<"El Promedio es: "<<Prom<<endl;
	cout<<"La Cantidad de Productos de la Categoria A son: "<<Ca<<endl;
	cout<<"La Cantidad de Productos de la Categoria B son: "<<Cb<<endl;
	cout<<"La Cantidad de Productos de la Categoria C son: "<<Cc<<endl;
	cout<<"El Monto Total de la Categoria A: $"<<Ta<<endl;
	cout<<"El Monto Total de la Categoria B: $"<<Tb<<endl;
	cout<<"El Monto Total de la Categoria C: $"<<Tc<<endl;
	
	getch();
	return 0;
}
