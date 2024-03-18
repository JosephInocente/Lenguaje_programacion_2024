#include <iostream>
#include <stdexcept>
#include <fstream>

using namespace std;

class Triangulo {
private:
    double lado1, lado2, lado3;

public:
    Triangulo(double l1, double l2, double l3) : lado1(l1), lado2(l2), lado3(l3) {
        if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0 || (lado1 + lado2 <= lado3) || (lado1 + lado3 <= lado2) || (lado2 + lado3 <= lado1)) {
            throw invalid_argument("Los lados no forman un triángulo válido.");
        }
        // Agregar registro al archivo
        log("Triángulo creado con lados: " + to_string(lado1) + ", " + to_string(lado2) + ", " + to_string(lado3));
    }

    double calcularPerimetro() const {
        return lado1 + lado2 + lado3;
    }

    void log(const string& mensaje) const {
        ofstream archivoLog("log.txt", ios::app); // ios::app para agregar al final del archivo
        if (archivoLog.is_open()) {
            archivoLog << mensaje << endl;
            archivoLog.close();
        } else {
            cerr << "No se pudo abrir el archivo de registro." << endl;
        }
    }
};

int main() {
    try {
        double l1, l2, l3;

        cout << "Ingrese el lado 1 del triangulo: ";
        cin >> l1;
        cout << "Ingrese el lado 2 del triangulo: ";
        cin >> l2;
        cout << "Ingrese el lado 3 del triangulo: ";
        cin >> l3;

        Triangulo triangulo(l1, l2, l3);
        double perimetro = triangulo.calcularPerimetro();

        cout << "El perimetro del triangulo es: " << perimetro << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

