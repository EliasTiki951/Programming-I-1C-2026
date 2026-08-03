// 17) Simular un sistema de ventas donde se ingresen montos 
// hasta que el usuario ingrese -1, mostrando la recaudación promedio. 

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int CM = 0;
	double Monto, Prom, Total = 0;
	
	while(true){
		cout<<"Ingrese Monto: ";
		cin>>Monto;
		
		if(Monto==-1){
			break;
		}
		
		if(Monto>=0){
			CM++;
			Total = Total + Monto;
			continue;
		}else if(Monto<-1){
			cout<<"Monto Inválido"<<endl;
			cout<<"Ingrese de nuevo"<<endl;
			cout<<"\n";
			continue;
		}	
	}
	
	Prom = Total/CM;
	
	cout<<"La recaudación Promedio es de $"<<Prom<<endl;
	
	getch();
	return 0;
}
