#include <iostream>
#include <string>

using namespace std;

// Estructura para representar una pregunta y su respuesta
struct Pregunta {
    string enunciado;
    string respuestaCorrecta;
};

// Función para hacer una pregunta y evaluar la respuesta
bool hacerPregunta(const Pregunta& pregunta) {
    string respuestaUsuario;
    cout << pregunta.enunciado << endl;
    cout << "Tu respuesta: ";
    cin >> respuestaUsuario;

    // Convertir la respuesta del usuario a minúsculas para hacer la comparación insensible a mayúsculas
    for (char &c : respuestaUsuario) {
        c = tolower(c);
    }

    // Evaluar la respuesta
    if (respuestaUsuario == pregunta.respuestaCorrecta) {
        cout << "¡Respuesta correcta!\n";
        return true;
    } else {
        cout << "Respuesta incorrecta. La respuesta correcta es: " << pregunta.respuestaCorrecta << "\n";
        return false;
    }
}

int main() {
    // Arreglo de preguntas
    Pregunta preguntas[] = {
        {"¿Cuál es la capital de Francia?", "parís"},
        {"¿En qué año se fundó la ONU?", "1945"},
        {"¿Cuántas patas tiene un gato?", "4"}
        // Agrega más preguntas según sea necesario
    };

    int respuestasCorrectas = 0;
    int respuestasIncorrectas = 0;

    // Realizar cada pregunta y evaluar la respuesta
    for (const Pregunta& pregunta : preguntas) {
        if (hacerPregunta(pregunta)) {
            respuestasCorrectas++;
        } else {
            respuestasIncorrectas++;
        }
    }

    // Mostrar resultados
    cout << "\nFin del juego.\n";
    cout << "Respuestas correctas: " << respuestasCorrectas << endl;
    cout << "Respuestas incorrectas: " << respuestasIncorrectas << endl;

    return 0;
}
