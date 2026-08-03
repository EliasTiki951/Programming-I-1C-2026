// 3. Facturación semanal
// Un negocio registró la facturación de los últimos 30 días.
// El programa debe:
//    • Cargar la facturación diaria.
//    • Mostrar:
//       • total facturado,
//       • promedio diario,
//       • día con mayor facturación,
//       • día con menor facturación,
//       • cuántos días la facturación superó el promedio,
//       • cuántos días la facturación fue inferior a $100.000,
//       • porcentaje de días con facturación mayor a $500.000.

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	double Fac[30], Total = 0, Prom = 0, MAF = 0, MEF = 0, PORC = 0;
	int DMA = 0, DME = 0, CP = 0, FI = 0, FM = 0;
	
	for(int i=0; i<30; i++){
		cout<<"Ingrese la Facturación del Día "<<i+1<<": ";
		cin>>Fac[i];
		cout<<"\n";
		
		Total += Fac[i];
		
		if(i==0){
			DMA = i+1;
			MAF = Fac[i];
			DME = i+1;
			MEF = Fac[i];
		}else{
			if(Fac[i]>MAF){
				DMA = i+1;
				MAF = Fac[i];
			}else{
				if(Fac[i]<MEF){
					DME = i+1;
					MEF = Fac[i];
				}
			}
		}
	}
	
	Prom = Total/30;
	
	for(int i=0; i<30; i++){
		if(Fac[i]>Prom){
			CP++;
		}
		
		if(Fac[i]<100000){
			FI++;
		}
		
		if(Fac[i]>500000){
			FM++;
		}
	}
	
	PORC = (100*FM)/30;
	
	system("cls");
	
	cout<<"========="<<endl;
	cout<<" INFORME "<<endl;
	cout<<"========="<<endl;
	cout<<"\n";
	cout<<"El Total Facturado en el Mes es de $"<<Total<<endl;
	cout<<"El promedio diario es de "<<Prom<<endl;
	cout<<"La Mayor Facturación fue el Día "<<DMA<<" con $"<<MAF<<endl;
	cout<<"La Menor Facturación fue el Día "<<DME<<" con $"<<MEF<<endl;
	cout<<"El Porcentaje de Días con Facturación Mayor a $500.000 es del %"<<PORC<<endl;
	
	getch();
	return 0;
}
