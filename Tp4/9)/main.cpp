3 // 9) Conversor de unidades con switch
// Men�:
// 9.1 Metros a cent�metros
// 9.2 Kilogramos a gramos
// 9.3 Celsius a Fahrenheit
// Ejecutar conversi�n elegida.

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
	using namespace std;

int main()
{
	int ops;
	float m;
	float k;
	float cel;
	float c;
	float g;
	float f;

	cout << "=================" << endl;
	cout << "      MENU       " << endl;
	cout << "=================" << endl;
	cout << endl;
	cout << "1. Metros a Centimetros." << endl;
	cout << "2. Kilogramos a gramos." << endl;
	cout << "3. Celsius a Fahrenheit." << endl;
	cout << endl;
	cout << "Elija una opcion: ";
	cin >> ops;

	switch (ops)
	{
	case 1:
		cout << "Escriba los metros: ";
		cin >> m;
		c = m * 100;
		cout << m << " metros son " << c << " centimetros." << endl;
		break;

	case 2:
		cout << "Escriba los kilogramos: ";
		cin >> k;
		g = k * 1000;
		cout << k << " kilogramos son " << g << " gramos." << endl;
		break;

	case 3:
		cout << "Escriba los grados en Celsius: ";
		cin >> cel;
		f = 32 + (cel * 9 / 5);
		cout << cel << " grados Celsius son " << f << " grados Fahrenheit." << endl;
		break;
	default:
		cout << "Opcion invalida." << endl;
	}

	getch();
	return 0;
}
