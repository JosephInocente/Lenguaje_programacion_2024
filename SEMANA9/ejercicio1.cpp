/**
 * Crear un aplicativo que calcule si un alumno
 * es mayor de edad
 * calcule el promedio de sus tres notas
 * y determine si aprobo
 */

#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    int edad;
    float notas[3];  
};

const int NUM_ALUMNOS = 2;  

// Función para calcular la mayoría de edad
bool esMayorDeEdad(const Alumno& alumno) {
    return alumno.edad >= 18;
}

//  toma un objeto Alumno como argumento y calcula el promedio de las 3 notas del estudiante
float calcularPromedio(const Alumno& alumno) {
    float sumaNotas = 0;
    for (int i = 0; i < 3; ++i) {
        sumaNotas += alumno.notas[i];
    }
    return sumaNotas / 3.0;
}

// Función para determinar si un estudiante aprobó
bool aprobo(const Alumno& alumno) {
    float promedio = calcularPromedio(alumno);
    return promedio >= 11.0;  // 
}

int main() {
    Alumno alumnos[NUM_ALUMNOS];

    for (int i = 0; i < NUM_ALUMNOS; ++i) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin >> alumnos[i].nombre;

        cout << "Ingrese la edad de " << alumnos[i].nombre << ": ";
        cin >> alumnos[i].edad;

        // Ingresar 3 notas
        for (int j = 0; j < 3; ++j) {
            cout << "Ingrese la nota " << j + 1 << " de " << alumnos[i].nombre << ": ";
            cin >> alumnos[i].notas[j];
        }
        cout << endl;
    }

    // Calcular y mostrar la mayoría de edad de cada estudiante
    for (int i = 0; i < NUM_ALUMNOS; ++i) {
        cout << alumnos[i].nombre << " es ";
        if (!esMayorDeEdad(alumnos[i])) {
            cout << "menor de edad ";
        } else {
            cout << "mayor de edad ";
        }
        cout << endl;
    }

    // Calcular y mostrar el promedio de las notas
    for (int i = 0; i < NUM_ALUMNOS; ++i) {
        float promedio = calcularPromedio(alumnos[i]);
        cout << "El promedio de las notas de " << alumnos[i].nombre << " es: " << promedio << endl;
    }

    // Determinar y mostrar si cada estudiante aprobó
    for (int i = 0; i < NUM_ALUMNOS; ++i) {
        cout << alumnos[i].nombre << " ";
        if (aprobo(alumnos[i])) {
            cout << "aprobo";
        } else {
            cout << "no aprobo";
        }
        cout << endl;
    }

    return 0;
}
