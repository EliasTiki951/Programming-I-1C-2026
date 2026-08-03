// 3) Facturación semanal
// Durante 7 días se registró la facturación diaria de un negocio.
// Determinar:
//  • Total facturado en la semana.
//  • Día con mayor facturación.
//  • Cuántos días se facturó menos de $100.000. 

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	double Fac, Total = 0, MF = 0;
	int Dia, C = 0;
	
	for(int i=1; i<=7; i++){
		cout<<"El día "<<i<<" se facturó: ";
		cin>>Fac;
		
		Total += Fac;
		
		if(i==1){
			Dia = i;
			MF = Fac;
		}else{
			if(Fac>MF){
				Dia = i;
			    MF = Fac;
			}
		}
		
		if(Fac<100000){
			C++;
		}
		
		cout<<"\n";
	}
	
	cout<<"En Total en la semana se Facturó $"<<Total<<endl;
	cout<<"El Día "<<Dia<<" tuvo la mayor facturación."<<endl;
	
	if(C==1){
		cout<<"Solo "<<C<<" día facturó menos de $100.000"<<endl;
	}else{
		cout<<"Solo "<<C<<" días facturó menos de $100.000"<<endl;
	}
	
	getch();
	return 0;
}
