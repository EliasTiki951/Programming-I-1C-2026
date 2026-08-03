// 5) Aprobado o desaprobado
// Ingresar una nota (0–10) y mostrar si está aprobado (>=6) o desaprobado. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main(){
	int nota;
	
	cout<<"========================"<<endl;
	cout<<" APROBADO O DESAPROBADO "<<endl;
	cout<<"========================"<<endl;
	cout<<endl;
	cout<<"Escribe la nota de tu examen: ";
	cin>>nota;
	
	if (nota<0){
		cout<<"Mentiroso."<<endl;
	}else if (nota<6){
		cout<<"Desaprobado."<<endl;
	}else if (nota>10){
		cout<<"Mentiroso."<<endl;
	}else{
		cout<<"Aprobado."<<endl;
	}
	
	getch();
	return 0;
}
