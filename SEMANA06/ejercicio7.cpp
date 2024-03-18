#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Alumno {
    string nombre;
    int edad;
    double calificacion;
};

int main() {
    //  vector de estructuras Alumno
    vector<Alumno> estudiantes;

    // ingresar información para varios estudiantes
    int numEstudiantes;
    cout << "Ingrese el número de estudiantes: ";
    cin >> numEstudiantes;

    for (int i = 0; i < numEstudiantes; ++i) {
        Alumno estudiante;

        // Solicitar información para cada estudiante
        cout << "\nEstudiante " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin.ignore(); // Para limpiar el buffer del teclado antes de getline
        getline(cin, estudiante.nombre);

        cout << "Edad: ";
        cin >> estudiante.edad;

        cout << "Calificación: ";
        cin >> estudiante.calificacion;

        // Agregar el estudiante al vector
        estudiantes.push_back(estudiante);
    }

    // Mostrar la información de todos los estudiantes
    cout << "\nInformación de todos los estudiantes:\n";
    for (const auto& estudiante : estudiantes) {
        cout << "Nombre: " << estudiante.nombre << "\nEdad: " << estudiante.edad
             << "\nCalificación: " << estudiante.calificacion << "\n\n";
    }

    return 0;
}
