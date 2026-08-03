// 5. Registro de Vehículo
// Ingresar: Marca, Modelo, Año, Precio
// Calcular cuánto costaría con un 10% de descuento

#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Mar, Mode;
	int Anio;
	long long Pre;
	long double Des;
	
	cout<<"========================"<<endl;
	cout<<"  REGISTRO DE VEHÍCULO  "<<endl;
	cout<<"========================"<<endl;
	cout<<"Marca: ";
	getline(cin, Mar);
	cout<<"Modelo: ";
	getline(cin, Mode);
	cout<<"Año: ";
	cin>>Anio;
	cout<<"Precio: ";
	cin>>Pre;
	
	Des=Pre-(Pre*10)/100;
	
	cout<<"\n";
	cout<<"==========="<<endl;
	cout<<"  INFORME  "<<endl;
	cout<<"==========="<<endl;
	cout<<"Marca: "<<Mar<<endl;
	cout<<"Modelo: "<<Mode<<endl;
	cout<<"Año: "<<Anio<<endl;
	cout<<"Precio: $"<<Pre<<endl;
	cout<<fixed<<setprecision(2); //Agregar toda la linea de números con 2 decimales
	cout<<"Con un 10% de descuento costaria $"<<Des<<endl;
	
	getch();
	return 0;
}
