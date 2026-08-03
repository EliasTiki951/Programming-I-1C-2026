// 8. Clasificación de edad
// Ingresar una edad y mostrar:
// • Niño (0–12)
// • Adolescente (13–17)
// • Adulto (18–59)
// • Adulto mayor (60 o más) 

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	int Edad;
	
	while(true){
		cout<<"Ingrese su Edad: ";
		cin>>Edad;
		
		if(Edad<0){
			cout<<"Mentiroso..."<<endl;
			cout<<"\n";
			continue;
		}else if(Edad>=0 && Edad<=12){
			cout<<"Es un Niño."<<endl;
		}else if(Edad>=13 && Edad<=17){
			cout<<"Es un Adolescente."<<endl;
		}else if(Edad>=18 && Edad<=59){
			cout<<"Es un Adulto."<<endl;
		}else if(Edad>=60 && Edad<=120){
			cout<<"Es un Adulto Mayor."<<endl;
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
