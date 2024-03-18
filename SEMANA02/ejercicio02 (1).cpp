#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    while (num2 == num1) {
        cout << "El segundo número debe ser diferente al primero. Ingrese otro número: ";
        cin >> num2;
    }

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    while (num3 == num1 || num3 == num2) {
        cout << "El tercer número debe ser diferente a los dos anteriores. Ingrese otro número: ";
        cin >> num3;
    }

    double mayor, menor;
    mayor = menor = num1;

    if (num2 > mayor) {
        mayor = num2;
    } else if (num2 < menor) {
        menor = num2;
    }

    if (num3 > mayor) {
        mayor = num3;
    } else if (num3 < menor) {
        menor = num3;
    }

    cout << "El mayor número es: " << mayor << endl;
    cout << "El menor número es: " << menor << endl;

    return 0;
}
