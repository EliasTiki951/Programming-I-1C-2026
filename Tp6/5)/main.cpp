// 5) Control de precios
// Un negocio registró el precio de 10 productos.
// Determinar:
//  • Precio más caro.
//  • Precio más barato.
//  • Cuántos productos cuestan más de $80.000.
//  • Diferencia entre el precio mayor y el menor. 

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	double Pre, PMC = 0, PMB = 0, Total = 0, Dife = 0;
	int C = 0;
	
	for(int i=1; i<=10; i++){
		cout<<"Precio del Producto "<<i<<": ";
		cin>>Pre;
		
		if(i==1){
			PMC = Pre;
			PMB = Pre;
		}else{
			if(Pre>PMC){
				PMC = Pre;
			}else{
				if(Pre<PMB){
					PMB = Pre;
				}
			}
		}
		
		if(Pre>80000){
			C++;
		}
	}
	
	Dife = PMC-PMB;
	
	cout<<"\n";
	cout<<"El precio más caro es de $"<<PMC<<endl;
	cout<<"El precio más barato es de $"<<PMB<<endl;
	cout<<C<<" Productos cuestan más de $80.000"<<endl;
	cout<<"La diferencia entre el precio mayor y el precio menor es de $"<<Dife<<endl;
	
	getch();
	return 0;
}
