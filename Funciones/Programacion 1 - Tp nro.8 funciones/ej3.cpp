/*
Calcular un porcentaje de un número
Fórmula:
Resultado = Numero * Porcentaje / 100
*/

#include <iostream>
using namespace std;

double porcentajes(double v, double p)
{
    double resultado = v * p / 100;

    return resultado;
}

int main()
{
    int valor, porcentaje;

    cout << "Ingrese el valor: " << endl;
    cin >> valor;
    cout << "Ingrese el porcentaje: " << endl;
    cin >> porcentaje;

    cout << "El " << porcentaje << "% de " << valor << " es: " << porcentajes(valor, porcentaje);

    return 0;
}