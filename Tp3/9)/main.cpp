// 9. Día de la semana con número (1–7)
// Ingresar un número del 1 al 7 y mostrar el día correspondiente usando else if. 

#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Num;
	
	while(true){
		cout<<"Ingrese un Número de la Semana (1 al 7): ";
		cin>>Num;
		
		if(Num<0){
			cout<<"Mentiroso..."<<endl;
			cout<<"\n";
			continue;
		}else if(Num==1){
			cout<<"Lunes"<<endl;
		}else if(Num==2){
			cout<<"Martes"<<endl;
		}else if(Num==3){
			cout<<"Miercoles"<<endl;
		}else if(Num==4){
			cout<<"Jueves"<<endl;
		}else if(Num==5){
			cout<<"Viernes"<<endl;
		}else if(Num==6){
			cout<<"Sábado"<<endl;
		}else if(Num==7){
			cout<<"Domingo"<<endl;
		}else{
			cout<<"Mentiroso..."<<endl;
			cout<<"\n";
			continue;
		}
		break;
	}
	
	getch();
	return 0;
}
