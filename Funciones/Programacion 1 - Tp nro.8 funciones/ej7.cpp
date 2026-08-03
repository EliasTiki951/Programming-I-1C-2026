/*
8. Calcular promedio de tres notas
Fórmula:
Promedio = (Nota1 + Nota2 + Nota3) / 3
*/

#include <iostream>
using namespace std;

double promedio(int n1, int n2, int n3)
{

    double prom = (n1 + n2 + n3) / 3;

    return prom;
}

int main()
{
    int n1, n2, n3;

    cout << "Ingrese la primera nota: " << endl;
    cin >> n1;
    cout << "Ingrese la segunda nota: " << endl;
    cin >> n2;
    cout << "Ingrese la tercera nota: " << endl;
    cin >> n3;

    cout << "Su promedio es de: " << promedio(n1, n2, n3);

    return 0;
}