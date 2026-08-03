// 6) Control de stock vendido
// Se registraron 10 productos.
// Por cada uno se ingresa la cantidad vendida.
// Determinar:
//  • Producto más vendido.
//  • Producto menos vendido.
//  • Total de unidades vendidas. 

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Pro[10];
	int Cant[10];
	int Total = 0;
	string MaPV, MePV;
	int MaCant, MeCant;
	
	for(int i=0; i<10; i++){
		cout<<i+1<<". Nombre del Producto: ";
		getline(cin, Pro[i]);
		cout<<"Cantidad Vendida: ";
		cin>>Cant[i];
		cin.ignore();
		cout<<"\n";
		Total = Total + Cant[i];
		
		if(i==0){
			MaPV = Pro[i];
			MaCant = Cant[i];
			MePV = Pro[i];
			MeCant = Cant[i];
		}
		
		if(Cant[i]>MaCant){
			MaPV = Pro[i];
			MaCant = Cant[i];
		}
		
		if(Cant[i]<MeCant){
			MePV = Pro[i];
			MeCant = Cant[i];
		}
	}
	
	cout<<"El producto más vendido: "<<MaPV<<" con "<<MaCant<<" unidades."<<endl;
	cout<<"El producto menos vendido: "<<MePV<<" con "<<MeCant<<" unidades."<<endl;
	cout<<"Un Total de "<<Total<<" unidades vendidas."<<endl;
	
	getch();
	return 0;
}
