// 1) Ventas del día
// Un comercio registró 10 ventas (importe por venta).
// Determinar:
// • Recaudación total.
// • Venta más alta.
// • Venta más baja.
// • Cuántas ventas superaron los $50.000. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	double Rt = 0, Va = 0, Vb = 0, C = 0, Imp;
	
	for(int i=1; i<=10; i++){
		cout<<i<<". Ingrese el Importe de la Venta: ";
		cin>>Imp;
		Rt += Imp;
		
		if(Imp>50000){
			C++;
		}
		
		if(i==1){
			Va = Imp;
			Vb = Imp;
		}else{
			if(Imp>Va){
				Va = Imp;
			}else{
				if(Imp<Vb){
					Vb = Imp;
				}
			}
		}
	}
	
	cout<<"\n";
	cout<<"La Recaudación Total es de $"<<Rt<<endl;
	cout<<"La venta mas Alta es de $"<<Va<<endl;
	cout<<"La venta mas Baja es de $"<<Vb<<endl;
	cout<<"La cantidad de ventas que superaron los 50mil es de "<<C<<" ventas."<<endl;
	
	getch();
	return 0;
}
