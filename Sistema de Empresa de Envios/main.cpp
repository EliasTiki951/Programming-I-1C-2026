// El programa es para que una empresa de logistica pueda cargar todos los paquetes
// y de esa manera poder ver cuanto facturó, y de cuanto es su promedio en una semana.

#include <iostream>
#include <string>
#include "Logistica.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	float facturacion[3][7] = {0};
	float totalTipo[3] = {0};
	float totalDia[7] = {0};
	int totalPaquetes = 0;
	int dias, opc;
	
	cout<<"================================="<<endl;
    cout<<"   LOGÍSTICA EMPRESA DE ENVIOS   "<<endl;
    cout<<"================================="<<endl;
    cout<<endl;
    while(true){
    	cout<<"Cantidad de días a trabajar: "<<endl;
		cout<<"1. Lunes a Viernes (5 dias)"<<endl;
		cout<<"2. Lunes a Domingo (7 dias)"<<endl;
		cout<<"Elija una opción: ";
		cin>>opc;
		
		switch(opc){
			case 1:
				dias=5;
				break;
			case 2:
				dias=7;
				break;
			default:
				cout<<"Opción inválida... Elija otra opción..."<<endl;
				cout<<endl;
				continue;
		}
		cout<<endl;
		break;
	}
	
	cargarDatos(
	    facturacion,
        totalTipo,
        totalDia,
        totalPaquetes,
        dias
	);
	
	mostrarDatos(
	    facturacion,
        totalTipo,
        totalDia,
        totalPaquetes,
        dias
	);

	return 0;
}
