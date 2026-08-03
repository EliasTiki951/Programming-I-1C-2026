// 9. Partido de Fútbol
// Ingresar: Nombre del equipo A, Goles equipo A, 
// Nombre del equipo B, Goles equipo B
// Mostrar el resultado del partido en formato:
// EquipoA X - Y EquipoB
// Gano (Equipo Ganador)

#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	
	string NomA, NomB;
	int GolA, GolB;
	
	cout<<"====================="<<endl;
	cout<<"  PARTIDO DE FUTBOL  "<<endl;
	cout<<"====================="<<endl;
	cout<<"Nombre del Equipo A: ";
	getline(cin, NomA);
	cout<<"Nombre del Equipo B: ";
	getline(cin, NomB);
	cout<<"Cant. de Goles del Equipo "<<NomA<<": ";
	cin>>GolA;
	cout<<"Cant. de Goles del Equipo "<<NomB<<": ";
	cin>>GolB;
	cout<<"\n";
	cout<<"============="<<endl;
	cout<<"  RESULTADO  "<<endl;
	cout<<"============="<<endl;
	cout<<NomA<<" "<<GolA<<" - "<<GolB<<" "<<NomB<<endl;
	cout<<"\n";
	
	if(GolA==GolB){
		cout<<"Empate"<<endl;
	}else{
		cout<<"El Ganador es: ";
		if(GolA>GolB){
			cout<<NomA<<endl;
		}else{
			cout<<NomB<<endl;
		}
	}
	
	getch();
	return 0;
}
