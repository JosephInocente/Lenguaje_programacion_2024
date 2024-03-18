#include <iostream>

using namespace std;

int main() {
    int n;

    // Solicitar al usuario ingresar un número entero positivo
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    // Validar que el número sea positivo
    while (n <= 0) {
        cout << "Por favor, ingrese un número entero positivo: ";
        cin >> n;
    }

    // Generar la secuencia de Collatz
    cout << "Secuencia de Collatz para " << n << ": " << n << " ";
    while (n != 1) {
        if (n % 2 == 0) {
            // Si n es par, divídelo por 2
            n = n / 2;
        } else {
            // Si n es impar, multiplícalo por 3 y suma 1
            n = 3 * n + 1;
        }
        cout << n << " ";
    }

    return 0;
}
