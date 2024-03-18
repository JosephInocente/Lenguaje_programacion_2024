#include <iostream>
#include <vector>

using namespace std;

int main() {
    // dimensiones de las matrices
    const int filas = 3;
    const int columnas = 3;

    // Crear las dos matrices en dos vectores
    vector<vector<int>> matriz1(filas, vector<int>(columnas));
    vector<vector<int>> matriz2(filas, vector<int>(columnas));

    // ingresar los elementos de la primera matriz
    cout << "Ingrese los elementos de la primera matriz:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento en la posición [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    // ingresar los elementos de la segunda matriz
    cout << "Ingrese los elementos de la segunda matriz:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento en la posición [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Realizar la suma de las dos matrices
    vector<vector<int>> matrizSuma(filas, vector<int>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Mostrar la matriz resultante
    cout << "\nMatriz resultante de la suma:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matrizSuma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
