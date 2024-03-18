#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // dimensiones de la matriz
    const int filas = 3;
    const int columnas = 3;

    // matriz de strings
    vector<vector<string>> matriz(filas, vector<string>(columnas));

    // ingresar palabras en cada celda de la matriz
    cout << "Ingrese varias palabras en cada celda de la matriz:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Palabras en la posición [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Concatenar todas las palabras de cada fila en una única cadena
    vector<string> resultados(filas);
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            resultados[i] += matriz[i][j] + " ";
        }
    }

    // Mostrar los resultados
    cout << "\nResultados de la concatenación por fila:\n";
    for (int i = 0; i < filas; ++i) {
        cout << "Fila " << i + 1 << ": " << resultados[i] << endl;
    }

    return 0;
}
