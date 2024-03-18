#include <iostream>
using namespace std;
// Función para calcular el sueldo semanal
double calcularSueldoSemanal(int horasTrabajadas) {
    // Tarifa por hora normal
    const double tarifaNormal = 20.0;
    // Tarifa por hora extra
    const double tarifaExtra = 25.0; 
    // Número de horas normales a la semana 
    const int horasNormales = 40;      

    double sueldo = 0.0;

    if (horasTrabajadas <= horasNormales) {
        // Si trabaja 40 horas o menos, se paga la tarifa normal
        sueldo = horasTrabajadas * tarifaNormal;
    } else {
        // Si trabaja más de 40 horas, se paga la tarifa normal por las primeras 40 horas y la tarifa extra por las horas adicionales
        sueldo = horasNormales * tarifaNormal + (horasTrabajadas - horasNormales) * tarifaExtra;
    }

    return sueldo;
}

int main() {
    int horasTrabajadas;

    // Solicitar al usuario el número de horas trabajadas
    cout << "Ingrese el numero de horas trabajadas a la semana: ";
    cin >> horasTrabajadas;

    // Calcular y mostrar el sueldo semanal
    double sueldo = calcularSueldoSemanal(horasTrabajadas);
    cout << "El sueldo semanal es: $" << sueldo << endl;

    return 0;
}
