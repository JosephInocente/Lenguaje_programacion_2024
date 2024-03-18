#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Definir el rango de números
    int inicio = 1;
    int fin = 27;

    // vector para numeros pares e impares
    vector<int> pares;
    vector<int> impares;

    // Llenado de las listas |pares| |impares|
    for (int i = inicio; i <= fin; ++i) {
        if (i % 2 == 0) {
            pares.push_back(i);  // Si es par, agregar a la lista de pares
        } else {
            impares.push_back(i);  // Si es impar, agregar a la lista de impares
        }
    }

    // Mostrar la lista de números pares
    cout << "Numeros pares: ";
    for (const auto &numero : pares) {
        cout << numero << " ";
    }
    cout <<endl;

    // Mostrar la lista de números impares
    cout << "Numeros impares: ";
    for (const auto &numero : impares) {
        cout << numero << " ";
    }
    cout <<endl;

    return 0;
}
