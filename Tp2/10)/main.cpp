// 10. Datos de Computadora
// Ingresar: Marca, Modelo, Cantidad de RAM (GB), 
// Precio, Tiene SSD (true/false)
// Calcular el precio en 6 cuotas (precio / 6).

#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Marc, Mode;
	int Cant, SSD;
	double Pre, Cuota;
	
	cout<<"========================"<<endl;
	cout<<"  DATOS DE COMPUTADORA  "<<endl;
	cout<<"========================"<<endl;
	cout<<"Marca: ";
	getline(cin, Marc);
	cout<<"Mode: ";
	getline(cin, Mode);
	cout<<"Cantidad de RAM (GB): ";
	cin>>Cant;
	cout<<"Precio: ";
	cin>>Pre;
	
	Cuota = Pre/6;

	while(true){
		cout<<"¿Tiene SSD?"<<endl;
	    cout<<"1. True"<<endl;
	    cout<<"2. False"<<endl;
	    cin>>SSD;
	    switch(SSD){
	    	case 1: 
	        	SSD = 1;
	        	break;
	    	case 2:
	    		SSD = 2;
	    		break;
	    	default:
	    		cout<<"Error. Elija de nuevo..."<<endl;
	    		cout<<"\n";
	    		continue;
		}
		cout<<"\n";
		break;
	}
	
	cout<<"==========="<<endl;
	cout<<"  INFORME  "<<endl;
	cout<<"==========="<<endl;
	cout<<"Marca: "<<Marc<<endl;
	cout<<"Modelo: "<<Mode<<endl;
	cout<<"Cantidad de RAM (GB): "<<Cant<<" GB."<<endl;
	cout<<"Precio: $"<<Pre<<endl;
	
	if(SSD==1){
		cout<<"Tiene SSD"<<endl;
	}else{
		cout<<"No tiene SSD"<<endl;
	}
	
	cout<<"Se lo podemos dejar en 6 cuotas sin interez de $"<<Cuota<<endl;
	
	getch();
	return 0;
}
