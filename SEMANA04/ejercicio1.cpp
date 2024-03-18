#include <iostream>

using namespace std;

int main() {
    const int n = 10;  // Número de elementos
    int numeros[n];
    int suma = 0;

    // Solicitar al usuario ingresar 10 números enteros
    cout << "Ingrese 10 números enteros:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    // Calcular el promedio
    double promedio = static_cast<double>(suma) / n;

    // Contar cuántos números son mayores que el promedio
    int mayoresQuePromedio = 0;
    for (int i = 0; i < n; ++i) {
        if (numeros[i] > promedio) {
            mayoresQuePromedio++;
        }
    }

    // Mostrar resultados
    cout << "El promedio de los números ingresados es: " << promedio << endl;
    cout << "Número de elementos mayores que el promedio: " << mayoresQuePromedio << endl;

    return 0;
}
