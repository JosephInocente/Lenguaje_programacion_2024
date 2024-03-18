//factorial de un numero

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    int factorial = 1;
    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}