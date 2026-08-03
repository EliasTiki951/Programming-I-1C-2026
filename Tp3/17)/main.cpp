// 17.Calculadora simple
// Ingresar dos números y una operación (+, -, *, /).
// Resolver usando switch. 

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	double Num1, Num2, S, R, M, D;
	int Ope;
	
	cout<<"Ingrese el primer Número: ";
	cin>>Num1;
	cout<<"Ingrese el segundo Número: ";
	cin>>Num2;
	cout<<"\n";
	
	while(true){
		cout<<"Elija un Operador: "<<endl;
		cout<<"1. Suma"<<endl;
		cout<<"2. Resta"<<endl;
		cout<<"3. Multiplicación"<<endl;
		cout<<"4. División"<<endl;
		cin>>Ope;
		
		switch(Ope){
			case 1:
				cout<<"\n";
				S = Num1 + Num2;
				cout<<Num1<<" + "<<Num2<<" = "<<S<<endl;
				break;
			case 2:
				cout<<"\n";
				R = Num1 - Num2;
				cout<<Num1<<" - "<<Num2<<" = "<<R<<endl;
				break;
			case 3:
				cout<<"\n";
				M = Num1 * Num2;
				cout<<Num1<<" * "<<Num2<<" = "<<M<<endl;
				break;
			case 4:
				cout<<"\n";
				D = Num1 / Num2;
				cout<<Num1<<" / "<<Num2<<" = "<<D<<endl;
				break;
			default:
				cout<<"\n";
				cout<<"Error... Intente de nuevo."<<endl;
				continue;
		}
		break;
	}
	
	getch();
	return 0;
}
