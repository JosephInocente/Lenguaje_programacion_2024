

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numeroDias;
    const int diasPorAnio = 365;
    const int diasPorMes = 30; // Tomando un valor aproximado
    int anos, meses, dias, mesRcae;

    // Solicitar el número de días al usuario
    cout << "Ingrese el número de días: ";
    cin >> numeroDias;

    // Calcular años, meses y días
    anos = numeroDias / diasPorAnio;
    int diasRestantes = numeroDias % diasPorAnio;
    meses = diasRestantes / diasPorMes;
    dias = diasRestantes % diasPorMes;

    // Calcular el mes en el que recae
    mesRcae = ceil((float)diasRestantes / diasPorMes);

    // Mostrar el resultado
    cout << "Equivalente a: " << endl;
    cout << "Años: " << anos << endl;
    cout << "Meses: " << meses << endl;
    cout << "Días: " << dias << endl;

    // Mostrar el mes en el que recae
    cout << "El mes en el que recae es: " << mesRcae << endl;

    return 0;
}

