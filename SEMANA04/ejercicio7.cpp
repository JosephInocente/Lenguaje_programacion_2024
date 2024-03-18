#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declaración e inicialización del vector con algunos elementos duplicados
    vector<int> vectorOriginal = {1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 1};

    // Mostrar el vector original
    cout << "Vector original: ";
    for (int elemento : vectorOriginal) {
        cout << elemento << " ";
    }
    cout << endl;

    // Vector para almacenar elementos únicos
    vector<int> vectorSinDuplicados;

    // Eliminar duplicados usando un bucle for
    for (int i = 0; i < vectorOriginal.size(); ++i) {
        // Verificar si el elemento ya está en el vectorSinDuplicados
        bool duplicado = false;
        for (int j = 0; j < vectorSinDuplicados.size(); ++j) {
            if (vectorOriginal[i] == vectorSinDuplicados[j]) {
                duplicado = true;
                break; // Salir del bucle interno si se encuentra un duplicado
            }
        }

        // Si no es un duplicado, agregarlo al vectorSinDuplicados
        if (!duplicado) {
            vectorSinDuplicados.push_back(vectorOriginal[i]);
        }
    }

    // Mostrar el vector sin duplicados
    cout << "Vector sin duplicados: ";
    for (int elemento : vectorSinDuplicados) {
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}
