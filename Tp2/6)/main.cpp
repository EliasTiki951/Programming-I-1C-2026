// 6. Datos de un Libro
// Ingresar: Título, Autor, Cantidad de páginas, Precio
// Calcular el precio por página.

#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string Titu, Aut;
	int Can;
	double Pre, Pag;
	
	cout<<"=========="<<endl;
	cout<<"  LIBROS  "<<endl;
	cout<<"=========="<<endl;
	cout<<"Título: ";
	getline(cin, Titu);
	cout<<"Autor: ";
	getline(cin, Aut);
	cout<<"Cantidad de Páginas: ";
	cin>>Can;
	cout<<"Precio: ";
	cin>>Pre;
	
	Pag = Pre/Can;
	
	cout<<"\n";
	cout<<"==========="<<endl;
	cout<<"  INFORME  "<<endl;
	cout<<"==========="<<endl;
	cout<<"Título: "<<Titu<<endl;
	cout<<"Autor: "<<Aut<<endl;
	cout<<"Cantidad de Páginas: "<<Can<<" páginas."<<endl;
	cout<<"Precio por página: $"<<Pag<<endl;
	
	getch();
	return 0;
}
