// 2. Ventas de vendedores
// Una empresa registró las ventas realizadas por 15 vendedores durante el mes.
// El programa debe:
//    • Cargar el nombre del vendedor y el monto vendido.
//    • Mostrar todos los vendedores y sus ventas.
//    • Informar:
//       • vendedor con mayor venta,
//       • vendedor con menor venta,
//       • promedio de ventas,
//       • cuántos vendedores superaron el promedio,
//       • cuántos vendedores vendieron menos de $500000,
//       • calcular el total facturado por la empresa.

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Ven[15], VEMA, VEME;
	double Mon[15], MOMA, MOME, Total = 0, Prom = 0;
	int CP = 0, CM = 0;
	
	for(int i=0; i<15; i++){
		cout<<i+1<<". Ingrese el Nombre del Vendedor: ";
		getline(cin, Ven[i]);
		cout<<"Ingrese el Monto Vendido: ";
		cin>>Mon[i];
		
		cin.ignore(1000,'\n');
		Total += Mon[i];
		cout<<"\n";
		
		if(i==0){
			MOMA = Mon[i];
			MOME = Mon[i];
			VEMA = Ven[i];
			VEME = Ven[i];
		}else{
			if(Mon[i]>MOMA){
				MOMA = Mon[i];
				VEMA = Ven[i];
			}else{
				if(Mon[i]<MOME){
					MOME = Mon[i];
					VEME = Ven[i];
				}
			}
		}
	}
	
	Prom = Total/15;
	system("cls");
	
	cout<<"============="<<endl;
	cout<<"   INFORME   "<<endl;
	cout<<"============="<<endl;
	cout<<"\n";
	
	for(int i=0; i<15; i++){
		cout<<i+1<<"- Vendedor: "<<Ven[i]<<", Monto Vendido: "<<Mon[i]<<endl;
		
		if(Mon[i]>Prom){
			CP++;
		}
		
		if(Mon[i]<500000){
			CM++;
		}
	}
	cout<<"\n";
	cout<<VEMA<<" tiene la mayor venta con $"<<MOMA<<endl;
	cout<<VEME<<" tiene la menor venta con $"<<MOME<<endl;
	cout<<"El Promedio de las ventas es de "<<Prom<<endl;
	cout<<CP<<" vendedores superaron el Promedio de la Venta Total."<<endl;
	cout<<CM<<" vendedores vendieron menos de $500.000."<<endl;
	cout<<"El Total facturado por la Empresa es de $"<<Total<<endl;
	
	getch();
	return 0;
}
