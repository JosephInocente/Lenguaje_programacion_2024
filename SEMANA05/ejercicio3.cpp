//Realice un programa que a partir de proporcionarle la velocidad de un automóvil, expresada en kilómetros por hora, proporcione la velocidad en metros por segundo.


#include <iostream>

using namespace std;

int main() {
    double velocidadKmph, velocidadMps;

    // Solicitar la velocidad en kilómetros por hora al usuario
    cout << "Ingrese la velocidad del automóvil en kilómetros por hora: ";
    cin >> velocidadKmph;

    // Convertir la velocidad a metros por segundo
    velocidadMps = (velocidadKmph * 1000) / 3600;

    // Mostrar la velocidad en metros por segundo
    cout << "La velocidad en metros por segundo es: " << velocidadMps << " m/s" << endl;

    return 0;
}
