#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int var1;
	
	/*while
	
	cout<<"Ingrese un numero: ";
	cin>>var1;
	
	while(var1>0){
		cout<<"Ingrese un numero: ";
		cin>>var1;
		
		if (var1 == 32){
			return 1;
		}
	}
	cout<<"Fin"<<endl;
	*/
	cout<<"Ingrese la nota: ";
	cin>>var1;
	
	while(var1<0 || var1>10){
		cout<<"Nota Invalida, Intente nuevamente."<<endl;
		cout<<"Nota:";
		cin>>var1;
	}
	
	if (var1>=6){
		cout<<"Aprobado"<<endl;
	}else{
		cout<<"Desprobado"<<endl;
	}
	
	getch();
	return 0;
}
