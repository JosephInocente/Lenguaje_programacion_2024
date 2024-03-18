#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    // vector de caracteres
    vector<string> caracteres;

    // ingrese caracteres y almacenarlos en el vector
    cout << "Ingrese varios caracteres (ingrese 'fin' para finalizar):\n";
    string caracter;
    while (true) {
        cin >> caracter;
        if (caracter == "fin") {
            break;
        }
        caracteres.push_back(caracter);
    }

    // ingresar el carácter a buscar
    cout << "Ingrese el carácter a buscar: ";
    string caracterABuscar;
    cin >> caracterABuscar;

    // Contar cuántas veces aparece el carácter en el vector
    int contador = count(caracteres.begin(), caracteres.end(), caracterABuscar);

    // Mostrar el resultado
    cout << "\nEl carácter '" << caracterABuscar << "' aparece " << contador << " veces en el vector.\n";

    return 0;
}
