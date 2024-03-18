#include <iostream>
#include <cctype>  // Necesario para la función tolower

using namespace std;

int main() {
    string palabra;

    // Solicitar al usuario ingresar una palabra
    cout << "Ingrese una palabra: "<<endl;
    cin >> palabra;

    // Convertir la palabra a minúsculas (opcional, para hacer la comparación insensible a mayúsculas)
    for (char &c : palabra) {
        c = tolower(c);
    }

    // Inicializar índices para comparar caracteres desde el inicio y el final
    int inicio = 0;
    int fin = palabra.length() - 1;
    bool esPalindromo = true;

    // Comparar caracteres en el bucle while
    while (inicio < fin) {
        if (palabra[inicio] != palabra[fin]) {
            esPalindromo = false;
            break;  // Si los caracteres no coinciden, no es necesario seguir comparando
        }
        inicio++;
        fin--;
    }

    // Mostrar el resultado
    if (esPalindromo) {
        cout << "La palabra es un palíndromo." << endl;
    } else {
        cout << "La palabra no es un palíndromo." << endl;
    }

    return 0;
}
