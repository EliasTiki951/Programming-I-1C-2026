/*
Calcular descuento de un producto
Fórmulas:
Descuento = Precio * Porcentaje / 100
PrecioFinal = Precio - Descuento
*/

#include <iostream>
using namespace std;

int descuento(double precio, int porc)
{
    double descuento = precio * porc / 100;
    double preciofinal = precio - descuento;

    return preciofinal;
}

int main()
{
    double precio, porc;

    cout << "Ingrese el precio final: " << endl;
    cin >> precio;
    cout << "Ingrese el porcentaje a descontar: " << endl;
    cin >> porc;

    cout << "Precio final: $" << descuento(precio, porc);

    return 0;
}