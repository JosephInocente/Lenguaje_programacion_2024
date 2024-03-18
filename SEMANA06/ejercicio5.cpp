#include <iostream>
#include <vector>

using namespace std;

int main() {
    // dimensiones de las matrices
    const int filas_matriz1 = 2;
    const int columnas_comun = 3;
    const int columnas_matriz2 = 2;

    // Crear las dos matrices
    vector<vector<int>> matriz1(filas_matriz1, vector<int>(columnas_comun));
    vector<vector<int>> matriz2(columnas_comun, vector<int>(columnas_matriz2));

    // ingresar los elementos de la primera matriz
    cout << "Ingrese los elementos de la primera matriz:\n";
    for (int i = 0; i < filas_matriz1; ++i) {
        for (int j = 0; j < columnas_comun; ++j) {
            cout << "Elemento en la posición [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    // ingresar los elementos de la segunda matriz
    cout << "Ingrese los elementos de la segunda matriz:\n";
    for (int i = 0; i < columnas_comun; ++i) {
        for (int j = 0; j < columnas_matriz2; ++j) {
            cout << "Elemento en la posición [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Inicializar la matriz resultante con ceros
    vector<vector<int>> matrizResultado(filas_matriz1, vector<int>(columnas_matriz2, 0));

    // Realizar la multiplicación de las dos matrices
    for (int i = 0; i < filas_matriz1; ++i) {
        for (int j = 0; j < columnas_matriz2; ++j) {
            for (int k = 0; k < columnas_comun; ++k) {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Mostrar la matriz resultante
    cout << "\nMatriz resultante de la multiplicación:\n";
    for (int i = 0; i < filas_matriz1; ++i) {
        for (int j = 0; j < columnas_matriz2; ++j) {
            cout << matrizResultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
