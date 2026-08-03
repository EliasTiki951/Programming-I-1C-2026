// 16) Pedir calificaciones hasta que se ingrese -1 y 
// mostrar cuántas notas fueron excelentes (>= 9). 

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int NE = 0;
	int Nota;
	
	while(true){
		cout<<"Ingrese una Nota: ";
		cin>>Nota;
		
		if(Nota==-1){
			break;
		}
		
		if(Nota>=0 && Nota<=10){
			if(Nota>=9){
				NE++;
			}
			cout<<"\n";
			continue;
		}else{
			cout<<"Nota Inválida"<<endl;
			cout<<"Ingrese de nuevo"<<endl;
			cout<<"\n";
			continue;
		}
	}
	
	cout<<NE<<" notas fueron excelentes."<<endl;
	
	getch();
	return 0;
}
