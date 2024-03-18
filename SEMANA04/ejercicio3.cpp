#include <iostream>

using namespace std;

int main() {
    int n;

    // Solicitar al usuario el tamaño de la matriz cuadrada
    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> n;

    // Declarar la matriz
    int matriz[n][n];

    // Solicitar al usuario ingresar los elementos de la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calcular la matriz transpuesta
    int transpuesta[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Imprimir la matriz original
    cout << "Matriz original:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Imprimir la matriz transpuesta
    cout << "\nMatriz transpuesta:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << transpuesta[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
