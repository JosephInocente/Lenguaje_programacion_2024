//elaborar un programa que simule las opciones de un cajero automatico

#include <iostream>

using namespace std;

int main() {
    double saldo = 1000.0; // Saldo inicial

    int opcion;
    double monto;

    do {
        // Menú del cajero automático
        cout << "=== Menú del Cajero Automático ===" << endl;
        cout << "1. Consultar Saldo" << endl;
        cout << "2. Realizar Depósito" << endl;
        cout << "3. Realizar Retiro" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Consultar saldo
                cout << "Saldo actual: $" << saldo << endl;
                break;
            case 2:
                // Realizar depósito
                cout << "Ingrese el monto a depositar: $";
                cin >> monto;
                if (monto > 0) {
                    saldo += monto;
                    cout << "Depósito exitoso. Nuevo saldo: $" << saldo << endl;
                } else {
                    cout << "Error: El monto debe ser mayor que cero." << endl;
                }
                break;
            case 3:
                // Realizar retiro
                cout << "Ingrese el monto a retirar: $";
                cin >> monto;
                if (monto > 0 && monto <= saldo) {
                    saldo -= monto;
                    cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
                } else if (monto <= 0) {
                    cout << "Error: El monto debe ser mayor que cero." << endl;
                } else {
                    cout << "Error: Saldo insuficiente." << endl;
                }
                break;
            case 4:
                // Salir del programa
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
        }

    } while (opcion != 4);

    return 0;
}
