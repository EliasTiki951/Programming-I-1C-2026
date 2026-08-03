// 11) Cajero automático simplificado
// Menú con switch:
// 1. Consultar saldo
// 2. Depositar
// 3. Extraer
// Validar que no se extraiga más del saldo disponible.

#include <iostream> //Libreria por defecto
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	double saldo = 1000;  // saldo inicial
    int opcion;
    double monto;

    cout << "===== CAJERO AUTOMATICO =====" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Depositar" << endl;
    cout << "3. Extraer" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Su saldo actual es: $" << saldo << endl;
            break;

        case 2:
            cout << "Ingrese el monto a depositar: ";
            cin >> monto;

            if(monto > 0) {
                saldo = saldo + monto;
                cout << "Deposito exitoso. Su nuevo saldo es: $" << saldo << endl;
            } else {
                cout << "Monto invalido." << endl;
            }
            break;

        case 3:
            cout << "Ingrese el monto a extraer: ";
            cin >> monto;

            if(monto > saldo) {
                cout << "Error: no puede extraer mas del saldo disponible." << endl;
            } else if(monto <= 0) {
                cout << "Monto invalido." << endl;
            } else {
                saldo = saldo - monto;
                cout << "Extraccion exitosa. Su nuevo saldo es: $" << saldo << endl;
            }
            break;

        default:
            cout << "Opcion invalida." << endl;
            break;
    }
	
	getch();
	return 0;
}
