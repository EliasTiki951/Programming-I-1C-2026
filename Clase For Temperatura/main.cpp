//Ingresar 10 temperaturas y mostrar su mayor y menor, Total y Promedio

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	float t;
	float total=0;
	float p;
	float tMax;
	float tMin;
	
	for(int i=1; i<=10; i++){
		cout<<"Ingrese Temperatura: ";
		cin>>t;
		
		if(i==1){
			tMax=t;
			tMin=t;
		}
		
		if(t>tMax){
			tMax=t;
		}
		
		if(t<tMin){
			tMin=t;
		}
		
		total+=t;
		
	}
	
	p=total/10;
	cout<<"Total: "<<total<<endl;
	cout<<"Promedio: "<<p<<endl;
	cout<<"Temperatura Máxima: "<<tMax<<endl;
	cout<<"Temperatura Mínima: "<<tMin<<endl;
	
	getch();
	return 0;
}
