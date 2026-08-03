/*
Convertir Celsius a Fahrenheit
Fórmula:
F = (C * 9 / 5) + 32
*/

#include <iostream>
using namespace std;

int conversion(int g)
{
    int resultado = (g * 9 / 5) + 32;

    return resultado;
}

int main()
{
    int grados;
    cout << "Ingrese el valor de grados a convertir: " << endl;
    cin >> grados;

    cout << "Resultado de la conversion: " << conversion(grados);

    return 0;
}