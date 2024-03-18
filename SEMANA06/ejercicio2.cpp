#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    string palabra;
    // vector de strings para almacenar palabras
    vector<string> palabras;

    // ingrese palabras y almacenarlas en el vector
    cout << "Ingrese varias palabras (ingrese 'fin' para finalizar):\n";
   
    while (true) {
        cin >> palabra;
        if (palabra == "fin") {
            break;
        }
        palabras.push_back(palabra);
    }

    // Concatenar todas las palabras en una única cadena
    string resultado;
    for (const string& p : palabras) {
        resultado += p + " ";
    }

    // Mostrar el resultado
    cout << "\nResultado de la concatenación:\n";
    cout << resultado << endl;

    return 0;
}
