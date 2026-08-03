// 5. Registro de compras de clientes
// Un supermercado desea registrar el monto gastado por 25 clientes.
// El programa debe:
//    • Cargar el nombre del cliente y el monto gastado.
//    • Informar:
//        • cliente que más gastó,
//        • cliente que menos gastó,
//        • gasto promedio,
//        • cuántos clientes gastaron más de $100000,
//        • cuántos clientes gastaron menos que el promedio,
//        • total recaudado,
//        • mostrar los clientes que podrían recibir una promoción VIP (gasto mayor al promedio y superior a $150000).

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Cli[25], CMAG, CMEG;
	double Mon[25], Total = 0, Prom = 0, GMAX = 0, GMIN = 0;
	int C1, CP;
	
	for(int i=0; i<25; i++){
		cout<<i+1<<". Ingrese el Nombre del Cliente: ";
		getline(cin, Cli[i]);
		cout<<"Monto Gastado: ";
		cin>>Mon[i];
		cout<<"\n";
		
		Total += Mon[i];
		cin.ignore(1000,'\n');
		
		if(i==0){
			CMAG = Cli[i];
			GMAX = Mon[i];
			CMEG = Cli[i];
			GMIN = Mon[i];
		}else{
			if(Mon[i]>GMAX){
				GMAX = Mon[i];
				CMAG = Cli[i];
			}else{
				if(Mon[i]<GMIN){
					GMIN = Mon[i];
					CMEG = Cli[i];
				}
			}
		}
	}
	
	Prom = Total/25;
	
	for(int i=0; i<25; i++){
		if(Mon[i]>100000){
			C1++;
		}
		
		if(Mon[i]<Prom){
			CP++;
		}
	}
	
	system("cls");
	
	cout<<"==========="<<endl;
	cout<<"  INFORME  "<<endl;
	cout<<"==========="<<endl;
	cout<<"\n";
	cout<<CMAG<<" es el cliente que más gastó con $"<<GMAX<<endl;
	cout<<CMEG<<" es el cliente que menos gastó con $"<<GMIN<<endl;
	cout<<"El gasto promedio de todos los clientes es de "<<Prom<<endl;
	cout<<C1<<" Clientes gastaron más de $100.000"<<endl;
	cout<<CP<<" Clientes gastaron menos que el promedio."<<endl;
	cout<<"El Total Recaudado es de $"<<Total<<endl;
	cout<<"\n";
	cout<<"Los Clientes que pueden recibir una Promoción VIP son: "<<endl;
	
	for(int i=0; i<25; i++){
		if(Mon[i]>Prom && Mon[i]>150000){
			cout<<"- "<<Cli[i]<<endl;
		}
	}
	
	getch();
	return 0;
}
