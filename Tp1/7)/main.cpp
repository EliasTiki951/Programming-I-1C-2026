// 7)Realizar un programa que solicite al usuario la temperatura en grados
// Celsius y calcule su equivalente en grados Fahrenheit.
// • Fórmula: F = (C * 9 / 5) + 32

#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main() {
	
	float cel;
	float fah;
	
	cout<<"----DE GRADOS CELSIUS A GRADOS FAHREHEIT-----"<<endl;
	cout<<"Temperatura en Grados Celsius: ";
	cin>>cel;
	
	fah=(cel*9/5)+32;
	
	cout<<cel<<" Celsius son "<<fah<<" grados Fahrenheit."<<endl;
	
	getch();
	return 0;
}
