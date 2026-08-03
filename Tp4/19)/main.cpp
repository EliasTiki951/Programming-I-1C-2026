// 19) Validación de fecha simple
// Solicitar al usuario:
//  • Día
//  • Mes
//  • Año
// El programa debe:
//  • Validar que el mes esté entre 1 y 12.
//  • Según el mes ingresado, validar que el día sea correcto:
//    • Meses con 31 días.
//    • Meses con 30 días.
//    • Febrero (considerar año bisiesto).
// • Si algún dato es inválido, mostrar “Fecha inválida”.
// • Si todos los datos son correctos, mostrar “Fecha válida”.

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Dia, Mes, Anio;
	
	cout<<"Ingrese Día (1-31): ";
	cin>>Dia;
	cout<<"Ingrese Mes (1-12): ";
	cin>>Mes;
	cout<<"Ingrese Año: ";
	cin>>Anio;
	
	if(Anio%4==0 && Anio%100==0 && Anio%400==0){
		if(Mes==2){
			if(Dia<1 && Dia>29){
				cout<<"Fecha Inválida"<<endl;
				return 0;
			}else{
				cout<<"Es un año Bisiesto"<<endl;
				cout<<"Fecha Válida"<<endl;
			}
		}
	}else{
		if(Mes==2){
			if(Dia<1 && Dia>28){
				cout<<"Fecha Inválida"<<endl;
				return 0;
			}else{
				cout<<"Fecha Válida"<<endl;
			}
		}
	}
	
	if(Mes>=1 && Mes<=12){
		if(Mes==4 || Mes==6 || Mes==9 || Mes==11){
			if(Dia<1 && Dia>30){
				cout<<"Fecha Inválida"<<endl;
				return 0;
			}else{
				cout<<"Fecha Válida"<<endl;
			}
		}else{
			if(Mes!=2){
				if(Dia<1 && Dia>31){
					cout<<"Fecha Inválida"<<endl;
					return 0;
				}else{
					cout<<"Fecha Válida"<<endl;
				}
			}
		}
	}else{
		cout<<"Fecha Inválida"<<endl;
		return 0;
	}
	
	getch();
	return 0;
}
