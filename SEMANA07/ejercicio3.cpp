#include <iostream>

double potenciaPorValor(double base, int exponente) {
    double resultado = 1.0;
    
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    
    return resultado;
}

int main() {
    double base = 2.0;
    int exponente = 3;
    
    double resultado = potenciaPorValor(base, exponente);
    
    std::cout << base << " elevado a la " << exponente << " es: " << resultado << std::endl;
    
    return 0;
}
