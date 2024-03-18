#include <iostream>
#include <cstdlib> // Para la función rand() [numeros aleatorios]
#include <ctime>   // Para la función time()

using namespace std;

int main() {
    // generar números aleatorios
    srand(time(0));

    // numero aleatorio 1-100
    int numero_a_adivinar = rand() % 100 + 1;
    int intento_usuario;
    int intentos_realizados = 0;
    const int max_intentos = 5;

    cout << " ¡ Bienvenido al juego |adivina adivinador| ! " << endl;
    
    // en esta parte del codigo va ah verificar si los intentos realizados sea menor a los intentos maximos 
    while (intentos_realizados < max_intentos) {
        cout << "Ingresa tu numero: ";
        cin >> intento_usuario;

        intentos_realizados++;  //sumatoria de intentos
        
    // si intentos de usuario es igual a el numero a adivinar "ganaste el juego"

        if (intento_usuario == numero_a_adivinar) {
            cout << "¡Felicidades! Adivinaste el numero en " << intentos_realizados << " intentos." << endl;
            break;
        } else if (intento_usuario < numero_a_adivinar) {
            cout << "El numero a adivinar es mayor. Intenta de nuevo." << endl;
        } else {
            cout << "El numero a adivinar es menor. Intenta de nuevo." << endl;
        }
    }

    if (intentos_realizados == max_intentos) {
        cout << "Lo siento, has agotado los " << max_intentos << " intentos. El número a adivinar era " << numero_a_adivinar << "." << endl;
    }

    return 0;
}
