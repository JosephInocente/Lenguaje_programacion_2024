#include <iostream>
#include <cctype> // Para las funciones isalpha y isupper

using namespace std;

// Función para cifrar una letra
char cifrarLetra(char letra, int clave) {
    if (isalpha(letra)) {
        // Verificar si la letra es mayúscula o minúscula
        char base = isupper(letra) ? 'A' : 'a';
        // Aplicar el cifrado César
        return static_cast<char>((letra - base + clave) % 26 + base);
    }
    // Si no es una letra, devolver la misma letra sin cambios
    return letra;
}

// Función para cifrar una cadena
string cifrarCadena(const string& cadena, int clave) {
    string cifrada = "";
    for (char caracter : cadena) {
        cifrada += cifrarLetra(caracter, clave);
    }
    return cifrada;
}

int main() {
    string cadena;
    int clave;

    // Solicitar al usuario ingresar una cadena y una clave
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese la clave del cifrado: ";
    cin >> clave;

    // Cifrar la cadena usando la clave especificada
    string cadenaCifrada = cifrarCadena(cadena, clave);

    // Mostrar el resultado cifrado
    cout << "Cadena cifrada: " << cadenaCifrada << endl;

    return 0;
}
