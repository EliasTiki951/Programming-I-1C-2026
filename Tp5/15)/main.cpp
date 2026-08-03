// 15) Ingresar edades hasta que se escriba 0 y 
// mostrar cuántas personas son mayores de edad. 

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int CM = 0;
	int Edad;
	
	while(true){
		cout<<"Ingrese una edad: ";
		cin>>Edad;
		
		if(Edad==0){
			break;
		}
		
		if(Edad>=1 && Edad<=120){
			if(Edad>=60){
				CM++;
			}
			cout<<"\n";
			continue;
		}else{
			cout<<"Edad Inválida"<<endl;
			cout<<"Ingrese de nuevo"<<endl;
			cout<<"\n";
			continue;
		}
	}
	
	cout<<CM<<" personas son Mayores de Edad."<<endl;
	
	getch();
	return 0;
}
