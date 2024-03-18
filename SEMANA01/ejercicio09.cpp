//validacion de entrada para un rango especifico

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número entre 1 y 10: "<<endl;
    cin >> numero;

    if (numero >= 1 && numero <= 10)
        cout << "Número válido." << endl;
    else
        cout << "Número fuera de rango." << endl;

    return 0;
}