//calculo del promedio de una serie de numeros

#include <iostream>
using namespace std;

int main() {
    int cantidad;
    double suma = 0;

    cout << "Ingrese la cantidad de números: "<<endl;
    cin >> cantidad;

    for (int i = 1; i <= cantidad; ++i) {
        double numero;
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;
        suma += numero;
    }

    double promedio = suma / cantidad;

    cout << "El promedio de los números es: " << promedio << endl;

    return 0;
}