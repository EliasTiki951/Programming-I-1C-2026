// 3) Sistema de estacionamiento
// Ingresar horas estacionadas.
// • Primera hora: $1500
// • Hasta 3 horas: $1200 por hora
// • Más de 3 horas: $1000 por hora
// • Ingresar horas estacionadas.
// • Primera hora: $1500
// • Hasta 3 horas: $1200 por hora
// • Más de 3 horas: $1000 por hora

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int horas;
	int T;
	
	cout<<"==============="<<endl;
	cout<<"     HORAS     "<<endl;
	cout<<"==============="<<endl;
	cout<<endl;
	cout<<"Ingrese horas estacionadas: ";
	cin>>horas;
	
	if(horas>0){
		if(horas==1){
			cout<<"1 Hora estacionado: $1500"<<endl;
		}else if(horas<=3){
			T = horas*1200;
			cout<<horas<<" horas estacionado: $ "<<T<<endl;
		}else{
			T = horas*1000;
			cout<<horas<<" horas estacionado: $ "<<T<<endl;
		}
	}else{
		cout<<"Mentiroso."<<endl;
	}
	
	getch();
	return 0;
}
