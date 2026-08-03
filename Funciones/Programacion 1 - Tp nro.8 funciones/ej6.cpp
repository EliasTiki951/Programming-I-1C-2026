/*
Calcular área de un rectángulo
Fórmula:
Area = Base * Altura
*/
#include <iostream>
using namespace std;

double Area(double b, double a)
{
    double Area = b * a;

    return Area;
}

int main()
{
    double base, altura;

    cout << "Ingrese la base: " << endl;
    cin >> base;
    cout << "Ingrese la altura: " << endl;
    cin >> altura;

    cout << "El area es de: " << Area(base, altura);

    return 0;
}