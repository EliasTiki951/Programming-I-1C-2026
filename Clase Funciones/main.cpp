#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

/*
float funci(float n1, float n2){
		float s=(n1+n2)/2;
		return s;
}

int main() {
	int n1, n2;
	
	cout<<"Ingrese un numero: ";
	cin>>n1;
	cout<<"Ingrese un numero: ";
	cin>>n2;
	
	cout<<"La mitad de la suma entre "<<n1<<" y "<<n2<<" es: "<<funci(n1,n2);
	
	return 0;
}
*/

void CargarArreglo(int *arr, int t){
	int c=1;
	for(int i=0; i<t; i++){
		arr[i]=c;
		c++;
	}
}

void MostrarArreglo(int *arr, int t){
	for(int i=0; i<t; i++){
		cout<<arr[i];
	}
}

void mostrarNombre(string n){
	cout<<"Hola "<<n<<endl;
}

int main(){
	int arr1[9];
	string Nombre;
	
	cout<<arr1<<endl;
	CargarArreglo(arr1,9);
	MostrarArreglo(arr1,9);
	cout<<endl;
	cout<<"Escribe tu nombre: ";
	getline(cin, Nombre);
	mostrarNombre(Nombre);
	
	
	return 0;
}
