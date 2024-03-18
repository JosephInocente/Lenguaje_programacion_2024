#include <iostream>
#include <vector>

using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int inicio, fin;

    // Solicitar al usuario los números de inicio y fin
    cout << "Ingrese el número de inicio: ";
    cin >> inicio;
    cout << "Ingrese el número de fin: ";
    cin >> fin;

    // Validar que el rango sea válido
    if (inicio > fin) {
        cout << "Error: El número de inicio debe ser menor o igual al número de fin." << endl;
        return 1; // Salir del programa con código de error 1
    }

    // Vector para almacenar números primos en el rango
    vector<int> primos;

    // Generar vector con números primos en el rango usando continue
    for (int num = inicio; num <= fin; ++num) {
        if (!esPrimo(num)) {
            continue; // Omitir números no primos y continuar con el siguiente
        }
        primos.push_back(num);
    }

    // Mostrar el vector de números primos
    cout << "Números primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
