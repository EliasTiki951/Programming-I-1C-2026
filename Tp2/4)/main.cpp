// 4. Información de Mascota
// Ingresar: Nombre de la mascota, Tipo (perro, gato, etc.), Edad, Peso,
// Vacunado (true/false o S/N)
// Mostrar todos los datos formateados

#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Mas, Tipo;
	int Edad, Vacu;
	float Peso;
	
	cout<<"Nombre de la Mascota: ";
	getline(cin, Mas);
	cout<<"Tipo (perro, gato, etc.): ";
	cin>>Tipo;
	cout<<"Edad de la Mascota: ";
	cin>>Edad;
	cout<<"Peso (Kilos): ";
	cin>>Peso;
	cout<<"Es Vacunado? "<<endl;
	cout<<"1. Si"<<endl;
	cout<<"2. No"<<endl;
	cin>>Vacu;
	cout<<"\n";
	cout<<"==========="<<endl;
	cout<<"  INFORME  "<<endl;
	cout<<"==========="<<endl;
	cout<<"El nombre de la mascota es "<<Mas<<"."<<endl;
	cout<<"Tipo: "<<Tipo<<"."<<endl;
	cout<<"Edad: "<<Edad<<" años."<<endl;
	cout<<"Peso: "<<Peso<<" kilos."<<endl;
	
	if(Vacu==1){
		cout<<"La mascota está vacunada."<<endl;
	}else{
		cout<<"La mascota no está vacunada."<<endl;
	}
	
	getch();
	return 0;
}
