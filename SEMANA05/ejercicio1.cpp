//Desarrolle un programa que permita leer 4 números y ordenarlos de menor a mayor, si es el caso.

#include <iostream>

using namespace std;

int main() {
    // Declarar variables para almacenar los números
    double num1, num2, num3, num4;

    // Solicitar al usuario que ingrese los números
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    cout << "Ingrese el cuarto número: ";
    cin >> num4;

    // Ordenar los números de menor a mayor
    if (num1 > num2) {
        swap(num1, num2);
    }
    if (num2 > num3) {
        swap(num2, num3);
    }
    if (num3 > num4) {
        swap(num3, num4);
    }
    if (num1 > num2) {
        swap(num1, num2);
    }
    if (num2 > num3) {
        swap(num2, num3);
    }
    
    // Imprimir los números ordenados
    cout << "Números ordenados de menor a mayor: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;

    return 0;
}
