// 4) Ventas por vendedor
// Una empresa tiene 6 vendedores.
// Se ingresa el total vendido por cada uno.
// Determinar:
//  • Vendedor que más vendió.
//  • Vendedor que menos vendió.
//  • Cuántos vendedores superaron los $300.000. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	double Total = 0, VMa = 0, VMe = 0, Ven;
	int OfeMa = 0, OfeMe = 0, C = 0;
	
	for(int i=1; i<=6; i++){
		cout<<"Vendedor "<<i<<": ";
		cin>>Ven;
		
		Total += Ven;
		
		if(i==1){
			VMa = Ven;
			OfeMa = i;
			VMe = Ven;
			OfeMe = i; 
		}else{
			if(Ven>VMa){
				VMa = Ven;
			    OfeMa = i;
			}else{
				if(Ven<VMe){
					VMe = Ven;
			        OfeMe = i;
				}
			}
		}
		
		if(Ven>300000){
			C++;
		}
	}
	
	cout<<"\n";
	cout<<"Los 6 Vendedores vendieron un Total de $"<<Total<<endl;
	cout<<"El vendedor que más vendió fue el vendedor "<<OfeMa<<endl;
	cout<<"El vendedor que menos vendió fue el vendedor "<<OfeMe<<endl;
	cout<<C<<" Vendedores superaron los $300.000."<<endl;
	
	getch();
	return 0;
}
