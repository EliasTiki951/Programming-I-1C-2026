// 1. Control de stock de productos
// Un comercio desea registrar el stock actual de 20 productos.
// El programa debe:
//    • Cargar el nombre y el stock de cada producto.
//    • Mostrar todos los productos junto a su stock.
//    • Informar:
//        • cuál tiene mayor stock,
//        • cuál tiene menor stock,
//        • cuántos productos tienen stock menor a 10 unidades,
//        • cuántos productos tienen stock igual a 0,
//        • el total de unidades almacenadas,
//        • mostrar los productos que necesitan reposición (stock menor a 5).

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Arr[20];
	double Stock[20];
	double MAS = 0, MES = 0, Total = 0;
	int C10 = 0, C0 = 0;
	string ProMA, ProME;
	
	cout<<"======================"<<endl;
	cout<<"  PRODUCTOS EN STOCK  "<<endl;
	cout<<"======================"<<endl;
	cout<<"Ingrese los 20 productos en Stock: "<<endl;
	cout<<"\n";
	
	for(int i=0; i<20; i++){
		cout<<i+1<<". Nombre del Producto: ";
		getline(cin, Arr[i]);
		cout<<"Stock del Producto: ";
		cin>>Stock[i];
		
		cin.ignore(1000, '\n');
		Total += Stock[i];
		
		if(i==0){
			MAS = Stock[i];
			MES = Stock[i];
			ProMA = Arr[i];
			ProME = Arr[i];
		}else{
			if(Stock[i]>MAS){
				MAS = Stock[i];
				ProMA = Arr[i];
			}else{
				if(Stock[i]<MES && Stock[i] != 0){
					MES = Stock[i];
					ProME = Arr[i];
				}
			}
		}
		cout<<"\n";
	}
	
	system("cls");
	
	cout<<"==========="<<endl;
	cout<<"  INFORME  "<<endl;
	cout<<"==========="<<endl;
	cout<<"\n";
	
	for(int i=0; i<20; i++){
		cout<<i+1<<"- El producto "<<Arr[i]<<" tiene "<<Stock[i]<<" de Stock."<<endl;
		
		if(Stock[i]<10){
			C10++;
			
			if(Stock[i]==0){
				C0++;
			}
		}
	}
	
	cout<<"\n";
	cout<<"El producto "<<ProMA<<" tiene el mayor stock con "<<MAS<<endl;
	cout<<"El producto "<<ProME<<" tiene el menor stock con "<<MES<<endl;
	cout<<C10<<" Productos tienen stock menor a 10 unidades."<<endl;
	cout<<C0<<" Productos tienen stock igual a 0."<<endl;
	cout<<"El total de unidades almacenadas es de "<<Total<<endl;
	cout<<"\n";
	
	for(int i=0; i<20; i++){
		if(Stock[i]<5){
			cout<<"--El Producto "<<Arr[i]<<" necesita Reposición."<<endl;
		}
	}
	
	getch();
	return 0;
}
