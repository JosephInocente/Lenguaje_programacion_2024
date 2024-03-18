#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
     int tamano;

    cout << "Ingrese el tamaño del vector: ";
    cin >> tamano;

    // almacenar los números
    vector<int> numeros;

    // ingresar valores y almacenarlos en el vector
    cout << "Ingrese los valores del vector:\n";
    for (int i = 0; i < tamano; ++i) {
        int valor;
        cout << "Valor " << i + 1 << ": ";
        cin >> valor;
        numeros.push_back(valor);
    }

    // vector ordenado de manera ascendente
    sort(numeros.begin(), numeros.end());

    // Mostrar el vector ordenado
    cout << "\nVector ordenado de manera ascendente:\n";
    for (int i = 0; i < tamano; ++i) {
        cout << numeros[i] << " ";
    }

    return 0;
}
