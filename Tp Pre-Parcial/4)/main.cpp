//  4. Evaluación de sucursales
//  Una empresa tiene 10 sucursales y quiere analizar sus ingresos mensuales.
//  El programa debe:
//    • Cargar el nombre de cada sucursal y su ingreso mensual.
//    • Informar:
//      • sucursal con mayores ingresos,
//      • sucursal con menores ingresos,
//      • total general recaudado,
//      • promedio de ingresos,
//      • cuántas sucursales superan el promedio,
//      • mostrar las sucursales con ingresos menores a $2000000,
//      • calcular qué porcentaje representan las sucursales que superan el millón de pesos.

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Sucu[10], SMA, SME;
	double Ing[10], MAI = 0, MEI = 0, Total = 0, Prom = 0, PORC = 0;
	int CP, C1;
	
	for(int i=0; i<10; i++){
		cout<<"Ingrese el nombre de la Sucursal "<<i+1<<": ";
		getline(cin, Sucu[i]);
		cout<<"Ingreso Mensual: ";
		cin>>Ing[i];
		
		cin.ignore(1000,'\n');
		Total += Ing[i];
		cout<<"\n";
		
		if(i==0){
			SMA = Sucu[i];
			MAI = Ing[i];
			SME = Sucu[i];
			MEI = Ing[i];
		}else{
			if(Ing[i]>MAI){
				SMA = Sucu[i];
				MAI = Ing[i];
			}else{
				if(Ing[i]<MEI){
					SME = Sucu[i];
					MEI = Ing[i];
				}
			}
		}
	}
	
	Prom = Total/10;
	
	for(int i=0; i<10; i++){
		if(Ing[i]>Prom){
			CP++;
		}
		
		if(Ing[i]>1000000){
			C1++;
		}
	}
	
	PORC = (100*C1)/10;
	system("cls");
	
	cout<<"==========="<<endl;
	cout<<"  INFORME  "<<endl;
	cout<<"==========="<<endl;
	cout<<"\n";
	cout<<"La Sucursal "<<SMA<<" tiene el Mayor ingreso con $"<<MAI<<endl;
	cout<<"La Sucursal "<<SME<<" tiene el Menor ingreso con $"<<MEI<<endl;
	cout<<"El Total Recaudado es de $"<<Total<<endl;
	cout<<"El Promedio de los ingresos es de "<<Prom<<endl;
	cout<<"Las Sucursales que superan el $1.000.000 es del %"<<PORC<<endl;
	cout<<"\n";
	cout<<"Las Sucursales que tienen ingresos menores a $2.000.000 son: "<<endl;
	
	for(int i=0; i<10; i++){
		if(Ing[i]<2000000){
			cout<<"- "<<Sucu[i]<<endl;
		}
	}
	
	getch();
	return 0;
}
