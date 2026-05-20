// 4) Realizar un programa que solicite al usuario 
// la base y la altura de un rectángulo y 
// en base a eso debe calcular y mostrar:
//  • El área del rectángulo
//  • El perímetro del rectángulo

#include <iostream> //Libreria por defecto
#include <cstdlib>
#include <conio.h> //Para que funcione en el cmd
using namespace std;

int main() {
	float base;
	float altura;
	float area;
	float peri;
	
	cout<<"-----RECTANGULO-----"<<endl;
	cout<<"Cuanto es la medida de la base en metros? ";
	cin>>base;
	cout<<"Cuanto es la medida de la altura en metros? ";
	cin>>altura;
	
	area=base*altura;
	peri=(base+altura)*2;
	
	cout<<"\n";
	cout<<"Segun las medidas cargadas entonses: "<<endl;
	cout<<"El Area del rectangulo es "<<area<<" m2."<<endl;
	cout<<"El Perimetro del rectangulo es "<<peri<<" m."<<endl;
	
	getch();
	return 0;
}
