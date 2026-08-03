// 10) Costo de envío según zona
// Ingresar zona (1–4) y peso del paquete.
// Calcular costo según combinación.

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	double Peso;
	int Zona, Costo;
	
	cout<<"Peso del paquete en kilos: ";
	cin>>Peso;
	cout<<"\n";
	
	while(true){
		cout<<"Ingrese zona (1-4) a enviar: ";
		cin>>Zona;
		
		if(Zona<1 || Zona>4){
			cout<<"Zona Inválida"<<endl;
			cout<<"Ingrese de nuevo"<<endl;
			cout<<"\n";
			continue;
		}
		break;
	}
	
	switch(Zona){
		case 1:
			if(Peso>=5){
				Costo = 1000;
			}else{
				Costo = 500;
			}
			break;
		case 2:
			if(Peso>=5){
				Costo = 2000;
			}else{
				Costo = 1500;
			}
			break;
		case 3:
			if(Peso>=5){
				Costo = 3000;
			}else{
				Costo = 2500;
			}
			break;
		case 4:
			if(Peso>=5){
				Costo = 4000;
			}else{
				Costo = 3500;
			}
			break;
		default:
			cout<<"\n";
	}
	
	cout<<"\n";
	cout<<"Total Costo es de $"<<Costo<<endl;
	
	getch();
	return 0;
}
