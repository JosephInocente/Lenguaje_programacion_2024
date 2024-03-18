#include <iostream>
#include <cmath>

using namespace std;

class Triangulo {
private:
    double l1, l2, l3;

public:

    // Constructor
    Triangulo(double lado1, double lado2, double lado3) : l1(lado1), l2(lado2), l3(lado3) {}

    // Métodos getter
    double get_l1() const { return l1; }
    double get_l2() const { return l2; }
    double get_l3() const { return l3; }

    // Métodos setter
    void set_l1(double lado1) { l1 = lado1; }
    void set_l2(double lado2) { l2 = lado2; }
    void set_l3(double lado3) { l3 = lado3; }

    // determinar el tipo de triángulo
    string determinar_tipo() const {
        if (l1 == l2 && l2 == l3)
            return "Equilátero";
        else if (l1 == l2 || l1 == l3 || l2 == l3)
            return "Isósceles";
        else
            return "Escaleno";
    }

    // calcular el área del triángulo 
    double calcular_area() const {
        double a = (l1 + l2 + l3) / 2;
        return sqrt(a * (a - l1) * (a - l2) * (a - l3));
    }

    // calcular el perímetro del triángulo
    double calcular_perimetro() const {
        return l1 + l2 + l3;
    }
};

int main() {
    double lado1, lado2, lado3;

    cout << "Ingrese el lado 1 del triángulo: ";
    cin >> lado1;

    cout << "Ingrese el lado 2 del triángulo: ";
    cin >> lado2;

    cout << "Ingrese el lado 3 del triángulo: ";
    cin >> lado3;

    Triangulo triangulo_ejemplo(lado1, lado2, lado3);

    cout << "Tipo de triángulo: " << triangulo_ejemplo.determinar_tipo() << endl;
    cout << "Área del triángulo: " << triangulo_ejemplo.calcular_area() << endl;
    cout << "Perímetro del triángulo: " << triangulo_ejemplo.calcular_perimetro() << endl;

    return 0;
}