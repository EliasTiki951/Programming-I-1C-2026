// 5) Número intermedio
// Ingresar tres números distintos y determinar cuál es el valor intermedio (es decir, el
// que no es ni el mayor ni el menor).
// Ejemplo:
// • Si se ingresan: 5, 9 y 7 ? el intermedio es 7
// • Si se ingresan: 20, 10 y 15 ? el intermedio es 15

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	float n1;
	float n2;
	float n3;
	
	cout<<"=================="<<endl;
	cout<<"    INTERMEDIO    "<<endl;
	cout<<"=================="<<endl;
	cout<<endl;
	cout<<"Ingrese el primer numero: ";
	cin>>n1;
	cout<<"Ingrese el segundo numero: ";
	cin>>n2;
	cout<<"Ingrese el tercer numero: ";
	cin>>n3;
	
	if(n1>n2 && n1<n3 || n1<n2 && n1>n3){
		cout<<"El numero intermedio es "<<n1<<endl;
	}else if(n2>n1 && n2<n3 || n2<n1 && n2>n3){
		cout<<"El numero intermedio es "<<n2<<endl;
	}else{
		cout<<"El numero intermedio es "<<n3<<endl;
	}

	getch();
	return 0;
}
