// 8) Sistema de notas con recuperatorio
// Ingresar nota principal y nota recuperatorio.
// Determinar estado final del alumno.
// 8.1 La nota minima de aprobación es 6
// 8.2 Si la nota principal es mayor o igual a 6, imprimir un mensaje que diga: Aprobado.
// 8.3 En caso contrario, ingresar por teclado la nota de recuperatorio.
// 8.4 Si la nota de recuperatorio es mayor o igual a 6, imprimir un mensaje que diga: Aprobado
// 8.5 En caso contrario, imprimir un mensaje que diga: Desaprobado

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	float Nota, Recu;
	
	while(true){
		cout<<"Ingrese su Nota Principal: ";
		cin>>Nota;
		
		if(Nota<=0 || Nota>10){
			cout<<"Nota Inválida..."<<endl;
			cout<<"Intente de nuevo"<<endl;
			cout<<"\n";
			continue;
		}
		break;
	}
	
	cout<<"\n";
	
	if(Nota>=6){
		cout<<"Aprobado"<<endl;
		return 0;
	}else{
		while(true){
			cout<<"Nota de Recuperatorio: ";
			cin>>Recu;
			
			if(Recu<0 || Recu>10){
				cout<<"Nota Inválida"<<endl;
				cout<<"Intente de nuevo"<<endl;
				cout<<"\n";
				continue;
			}
			break;
		}
		cout<<"\n";
		
		if(Recu>=6){
			cout<<"Aprobado"<<endl;
		}else{
			cout<<"Desaprobado"<<endl;
		}
	}
	
	getch();
	return 0;
}
