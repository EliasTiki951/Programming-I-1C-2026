#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Arr[30];
	int Dia = 0;
	int Fecha = 0;
	int Total = 0;
	double Prom = 0;
	int mayorr = 0;
	int Cont = 0;
	
	for(int i=0; i<30; i++){
		cout<<"Ingrese los gastos del Día "<<(i+1)<<": ";
		cin>>Arr[i];
		Dia++;
		Total += Arr[i];
		
		if(Arr[i] > mayorr){
			Fecha = Dia;
			mayorr = Arr[i];
		}
	}
	
	Prom = ((double)Total)/30;
	
	for(int i=0; i<30; i++){
		if(Arr[i]>Prom){
			Cont++;
		}
	}
	
	cout<<"\n";
	cout<<"El Gasto Total del mes fue de $"<<Total<<endl;
	cout<<"El Gasto Mayor fue de $"<<mayorr<<" el Día "<<Fecha<<endl;
	cout<<"El promedio diario fue de $"<<Prom<<endl;
	cout<<"La Cantidad de Días que superaron el promedio es de "<<Cont<<" Dias."<<endl;
	
	getch();
	return 0;
}
