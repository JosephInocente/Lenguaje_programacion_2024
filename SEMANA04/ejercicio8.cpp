#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declaración e inicialización del vector
    vector<int> numeros = {5, 12, 8, 21, 3, 15, 9, 25, 7};

    // Variable para almacenar el mayor elemento
    int mayor = numeros[0];  // Suponemos que el primer elemento es el mayor inicialmente

    // Bucle for para encontrar el mayor elemento
    for (int i = 1; i < numeros.size(); ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
            // Salir del bucle tan pronto como se encuentra el mayor elemento
            break;
        }
    }

    // Mostrar el resultado
    cout << "El mayor elemento en el vector es: " << mayor << endl;

    return 0;
}
