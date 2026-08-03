/*
Calcular aumento salarial
Fórmulas:
Aumento = Sueldo * Porcentaje / 100
NuevoSueldo = Sueldo + Aumento
*/

#include <iostream>
using namespace std;

double aumentosalarial(double s, double p)
{
    double aumento = s * p / 100;
    double nuevosueldo = s + aumento;

    return nuevosueldo;
}

int main()
{
    double sueldo, porc;

    cout << "Ingrese su sueldo: " << endl;
    cin >> sueldo;
    cout << "Ingrese el porcentaje de aumento: " << endl;
    cin >> porc;

    cout << "Su nuevo sueldo es $" << aumentosalarial(sueldo, porc);

    return 0;
}