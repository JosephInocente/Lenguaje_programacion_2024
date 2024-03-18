#include <iostream>
#include <cctype>  // Para las funciones isalpha y tolower

using namespace std;

int main() {
    string oracion;

    // Solicitar al usuario ingresar una oración
    cout << "Ingrese una oración: ";
    getline(cin, oracion);

    // Inicializar contadores para cada vocal
    int contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;

    // Iterar sobre cada caracter de la oración
    for (char caracter : oracion) {
        // Convertir el caracter a minúscula para hacer la comparación insensible a mayúsculas
        char caracterMinuscula = tolower(caracter);

        // Verificar si el caracter es una letra
        if (isalpha(caracterMinuscula)) {
            // Incrementar el contador correspondiente a la vocal encontrada
            switch (caracterMinuscula) {
                case 'a':
                    contadorA++;
                    break;
                case 'e':
                    contadorE++;
                    break;
                case 'i':
                    contadorI++;
                    break;
                case 'o':
                    contadorO++;
                    break;
                case 'u':
                    contadorU++;
                    break;
            }
        }
    }

    // Mostrar los resultados
    cout << "Cantidad de vocales en la oración:\n";
    cout << "A: " << contadorA << endl;
    cout << "E: " << contadorE << endl;
    cout << "I: " << contadorI << endl;
    cout << "O: " << contadorO << endl;
    cout << "U: " << contadorU << endl;

    return 0;
}
