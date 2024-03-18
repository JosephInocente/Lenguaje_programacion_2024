#include <iostream>

using namespace std;

// Función para encriptar un número de 4 dígitos
int encriptar(int numero) {
    // Suma 7 a cada dígito y toma el residuo de la división por 10
    int digito1 = (numero / 1000 + 7) % 10;
    int digito2 = ((numero % 1000) / 100 + 7) % 10;
    int digito3 = ((numero % 100) / 10 + 7) % 10;
    int digito4 = (numero % 10 + 7) % 10;

    // Construye el número encriptado
    return digito3 * 1000 + digito4 * 100 + digito1 * 10 + digito2;
}

// Función para desencriptar un número de 4 dígitos
int desencriptar(int numero) {
    // Resta 7 a cada dígito y toma el residuo de la división por 10
    int digito1 = (numero / 1000 + 3) % 10;
    int digito2 = ((numero % 1000) / 100 + 3) % 10;
    int digito3 = ((numero % 100) / 10 + 3) % 10;
    int digito4 = (numero % 10 + 3) % 10;

    // Construye el número desencriptado
    return digito3 * 1000 + digito4 * 100 + digito1 * 10 + digito2;
}

int main() {
    int numeroOriginal;

    // Solicitar al usuario que ingrese un número de 4 dígitos
    cout << "Ingrese un numero de 4 digitos: ";
    cin >> numeroOriginal;

    // Verificar que el número ingresado tiene 4 dígitos
    if (numeroOriginal < 1000 || numeroOriginal > 9999) {
        cout << "Por favor, ingrese un numero de 4 digitos." << endl;
        return 1; // Salir del programa con código de error
    }

    // Encriptar el número
    int numeroEncriptado = encriptar(numeroOriginal);
    cout << "Numero encriptado: " << numeroEncriptado << endl;

    // Desencriptar el número
    int numeroDesencriptado = desencriptar(numeroEncriptado);
    cout << "Numero desencriptado: " << numeroDesencriptado << endl;

    return 0;
}