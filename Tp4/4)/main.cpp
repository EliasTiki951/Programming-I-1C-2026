// 4) Clasificación de temperatura ambiental
// Ingresar una temperatura en grados Celsius y clasificarla según el siguiente criterio:
// • Menor a 0 => “Bajo cero”
// • Entre 0 y 15 => “Frío”
// • Entre 16 y 25 => “Templado”
// • Entre 26 y 35 => “Caluroso”
// • Mayor a 35 => “Muy caluroso”
// Verificar si la nota ingresada es valida, es decir, Entre los -273.15 y 100 grados Celsius

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	float tem;
	
	cout<<"============="<<endl;
	cout<<" TEMPERATURA "<<endl;
	cout<<"============="<<endl;
	cout<<endl;
	cout<<"Escriba la temperatura actual en Celsius: ";
	cin>>tem;
	
	if(tem<0){
		cout<<"Bajo cero."<<endl;
	}else if(tem<16){
		cout<<"Frio."<<endl;
	}else if(tem<26){
		cout<<"Templado."<<endl;
	}else if(tem<36){
		cout<<"Caluroso."<<endl;
	}else{
		cout<<"Muy caluroso."<<endl;
	}
	
	getch();
	return 0;
}
