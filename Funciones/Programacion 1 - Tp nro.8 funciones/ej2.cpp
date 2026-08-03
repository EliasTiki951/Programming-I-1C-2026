/*
Convertir Fahrenheit a Celsius
Fórmula:
C = (F - 32) * 5 / 9
*/

#include <iostream>
using namespace std;

double conversion(double g)
{

    double resultado = (g - 32) * 5 / 9;

    return resultado;
}

int main()
{

    double grados;

    cout << "Ingrese el valor de los grados a convertir: " << endl;
    cin >> grados;

    cout << "El resultado es: " << conversion(grados);

    return 0;
}