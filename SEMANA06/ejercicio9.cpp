#include <iostream>
#include <vector>

using namespace std;

struct Estudiante {
    string nombre;
    int calificaciones[5]; // 5 calificaciones por estudiante
};

int main() {

    vector<Estudiante> estudiantes;

    // ingresar calificaciones para varios estudiantes
    int numEstudiantes;
    cout << "Ingrese el número de estudiantes: ";
    cin >> numEstudiantes;

    for (int i = 0; i < numEstudiantes; ++i) {
        Estudiante estudiante;

        // Solicitar información para cada estudiante
        cout << "\nEstudiante " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin.ignore(); // Para limpiar el buffer del teclado antes de getline
        getline(cin, estudiante.nombre);

        cout << "Ingrese las 5 calificaciones del estudiante:\n";
        for (int j = 0; j < 5; ++j) {
            cout << "Calificación " << j + 1 << ": ";
            cin >> estudiante.calificaciones[j];
        }

        // Agregar el estudiante al vector
        estudiantes.push_back(estudiante);
    }

    // promedio de calificaciones para cada estudiante
    cout << "\nPromedio de calificaciones para cada estudiante:\n";
    for (const auto& estudiante : estudiantes) {
        int suma = 0;
        for (int j = 0; j < 5; ++j) {
            suma += estudiante.calificaciones[j];
        }
        double promedio = static_cast<double>(suma) / 5.0;

        cout << "Estudiante: " << estudiante.nombre << "\nPromedio: " << promedio << "\n\n";
    }

    return 0;
}
