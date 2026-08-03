#ifndef LOGISTICA_H
#define LOGISTICA_H

#include <iostream>
#include <string>
#include "Logistica.h"
using namespace std;

// Calcula el importe de un paquete según el tipo y peso
double CalcularImporte(int tipo, float peso){
	if (tipo==0 || tipo==1){ // Provincial o Nacional
		if(peso<5){
			return 17000;
		}else if(peso<=10){
			return 22000;
		}else{
			return 27000;
		}
	}else{ // Express
		if(peso<5){
			return 22000;
		}else if(peso<=10){
			return 27000;
		}else{
			return 32000;
		}
	}
}

// Carga los datos y calcula la facturación
void cargarDatos(float facturacion[3][7], float totalTipo[3], float totalDia[7], int &totalPaquetes, int dias){
	string tipos[3] = {"Provincial","Nacional","Express"};
	string nombresDias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
	
	int cantidadPaquetes = 0;
    float peso = 0;
    float importe = 0;
    
    for(int d=0; d<dias; d++){
    	cout<<"================"<<endl;
        cout<<"  DIA "<<d+1<<": "<<nombresDias[d]<<endl;
        cout<<"================"<<endl;
        
        for(int t=0; t<3; t++){
        	cout<<endl;
        	cout<<"Tipo de Envio: "<<tipos[t]<<endl;
        	cout<<"Cantidad de Paquetes: ";
        	cin>>cantidadPaquetes;
        	
        	totalPaquetes+=cantidadPaquetes;
        	
        	for(int p=0; p<cantidadPaquetes; p++){
        		cout<<"Peso del paquete "<<p+1<<" (Kg): ";
        		cin>>peso;
        		
        		importe = CalcularImporte(t, peso);
        		
				facturacion[t][d] += importe;
                totalTipo[t] += importe;
                totalDia[d] += importe;
			}
			cout<<endl;
		}   
	}
}

// Mostrar los resultados
void mostrarDatos(float facturacion[3][7], float totalTipo[3], float totalDia[7], int totalPaquetes, int dias){
	string tipos[3] = {"Provincial","Nacional","Express"};
	string nombresDias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
	float totalSemanal = 0;
	
	cout<<endl;
	cout<<"***************"<<endl;
    cout<<"    INFORME    "<<endl;
    cout<<"***************"<<endl;
    cout<<endl;
	
	cout<<"========================"<<endl;
    cout<<"  FACTURACIÓN POR DIA "<<endl;
    cout<<"========================"<<endl;
    
    for(int d=0; d<dias; d++){
    	cout<<nombresDias[d]<<": $"<<totalDia[d]<<endl;
    	totalSemanal += totalDia[d];
	}
	
	cout<<endl;
	cout<<"========================"<<endl;
    cout<<"  FACTURACIÓN POR TIPO  "<<endl;
    cout<<"========================"<<endl;
	
	//Puntero
	float *ptr = totalTipo;
	
	for(int i=0; i<3; i++){
		cout<<"--"<<tipos[i]<<": $"<<*(ptr + i)<<endl;
	}
	
	cout<<endl;
	cout<<"=================="<<endl;
    cout<<"  OTROS INFORMES  "<<endl;
    cout<<"=================="<<endl;
	cout<<"Facturación Total de la Semana: $"<<totalSemanal<<endl;
	
	// Día con mayor y menor facturación
	double MAFA, MEFA;
	string DiaMA, DiaME;
	
    for(int d=0; d<dias; d++){
    	if(d==0){
    		MAFA = totalDia[d];
    		MEFA = totalDia[d];
    		DiaMA = nombresDias[d];
    		DiaME = nombresDias[d];
		}else{
			if(totalDia[d]>MAFA){
				MAFA = totalDia[d];
				DiaMA = nombresDias[d];
			}
			
			if(totalDia[d]<MEFA){
				MEFA = totalDia[d];
				DiaME = nombresDias[d];
			}
		}
	}
	
	cout<<"El Día "<<DiaMA<<" tuvo la mayor facturación con $"<<MAFA<<endl;
	cout<<"El Día "<<DiaME<<" tuvo la menor facturación con $"<<MEFA<<endl;
	
	// Promedio semanal
	double promedioDia = totalSemanal/dias;
	double promedioTipo = totalSemanal/3;
	
	cout<<"Promedio de facturación por día: $"<<promedioDia<<endl;
	cout<<"Promedio de facturación por tipo: $"<<promedioTipo<<endl;
	
	// Dias que superaron el promedio
	cout<<endl;
	cout<<"Los Dias que superaron el Promedio son: "<<endl;
	
	for(int d=0; d<dias; d++){
		if(totalDia[d]>promedioDia){
			cout<<"--"<<nombresDias[d]<<" con $"<<totalDia[d]<<endl;
		}
	}
	
	// El total de paquetes
	cout<<"La cantidad total de Paquetes son: "<<totalPaquetes<<" paquetes."<<endl;
}

#endif
