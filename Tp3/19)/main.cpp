// 19.Sistema de calificaciones completo
// Ingresar una nota (0–10).
// • Validar que esté en rango.
// • Mostrar clasificación (Excelente, Muy bueno, Aprobado, Desaprobado).
// • Mostrar mensaje especial si es 10. 

#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Nota;
	
	while(true){
		cout<<"Ingrese su Nota (0-10): ";
		cin>>Nota;
		
		if(Nota>=0 && Nota<=10){
			if(Nota>=0 && Nota<=5){
				cout<<"\n";
				cout<<"Desaprobado."<<endl;
				break;
			}else{
				if(Nota>=6 && Nota<=8){
					cout<<"\n";
					cout<<"Aprobado."<<endl;
					break;
				}else{
					if(Nota==9){
						cout<<"\n";
						cout<<"Muy bueno."<<endl;
						break;
					}else{
						if(Nota==10){
							cout<<"\n";
							cout<<"Excelente."<<endl;
							cout<<"Muchas Felicidades con tu nota 10."<<endl;
							break;
						}
					}
				}
			}
		}else{
			cout<<"Nota Inválida..."<<endl;
			cout<<"Ingrese nuevamente..."<<endl;
			cout<<"\n";
			continue;
		}
		break;
	}
	
	getch();
	return 0;
}
