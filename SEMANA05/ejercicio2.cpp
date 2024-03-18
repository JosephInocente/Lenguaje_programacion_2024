//Desarrolle un algoritmo que permita leer un valor entero positivo N y determinar si es primo o no.

#include <iostream>

using namespace std;

int main() {
    int Num;
    bool esPrimo = true;

    cout << "Ingrese un valor entero positivo N: ";
    cin >> Num;

    // Verificar si N es menor o igual a 1
    if (Num <= 1) {
        cout << Num << " no es un número primo." << endl;
        return 0;
    }

    // Verificar si Num es divisible por algún número entre 2 y la raíz cuadrada de Num
    for (int i = 2; i * i <= Num; i++) {
        if (Num % i == 0) {
            esPrimo = false;
            break;
        }
    }

    // Mostrar el resultado
    if (esPrimo) {
        cout << Num << " es un número primo." << endl;
    } else {
        cout << Num << " no es un número primo." << endl;
    }

    return 0;
}
