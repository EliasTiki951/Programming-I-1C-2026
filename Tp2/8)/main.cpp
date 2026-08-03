// 8. Conversión de Moneda
// Ingresar: Nombre de la persona, Cantidad de pesos, Cotización del dólar
// Calcular cuántos dólares puede comprar.

#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Nom;
	double Pes, Dola, Doll;
	
	cout<<"==========================="<<endl;
	cout<<"  CONVERSIÓN DE LA MONEDA  "<<endl;
	cout<<"==========================="<<endl;
	cout<<"Nombre de la Persona: ";
	getline(cin, Nom);
	cout<<"Cantidad de Pesos: ";
	cin>>Pes;
	cout<<"Cotización del Dolar: ";
	cin>>Dola;
	
	Doll = Pes/Dola;
	
	cout<<"\n";
	cout<<"==========="<<endl;
	cout<<"  INFORME  "<<endl;
	cout<<"==========="<<endl;
	cout<<"Nombre de la Persona: "<<Nom<<endl;
	cout<<"Cantidad de Pesos: $"<<Pes<<endl;
	cout<<"Cotización del Dolar: $"<<Dola<<endl;
	cout<<"Puede comprar un Total de $"<<Doll<<" dolares."<<endl;
	
	getch();
	return 0;
}
