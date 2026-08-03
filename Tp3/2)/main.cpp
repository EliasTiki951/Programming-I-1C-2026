// 2. Mayor de edad
// Ingresar la edad de una persona y mostrar si es mayor o menor de edad. 

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	int edad;
	
	cout<<"=================="<<endl;
	cout<<"       EDAD       "<<endl;
	cout<<"=================="<<endl;
	cout<<endl;
	cout<<"Cual es tu edad? ";
	cin>>edad;
	
	if(edad==0){
		cout<<"Sos un recien nacido."<<endl;
	}else if(edad<0){
		cout<<"Mentiroso"<<endl;
	}else if(edad<18){
		cout<<"Sos menor de edad."<<endl;
	}else if(edad>100){
		cout<<"Mentiroso"<<endl;
	}else{
		cout<<"Anda a chambear."<<endl;
	}
	
	getch();
	return 0;
}
