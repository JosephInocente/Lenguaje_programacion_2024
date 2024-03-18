//funciones por referencia.....

#include <iostream>

void sumaPorReferencia(int& a, int& b, int& resultado) {
    resultado = a + b;
}

int main() {
    int num1 = 5, num2 = 7, resultado;
    
    sumaPorReferencia(num1, num2, resultado);
    
    std::cout << "La suma por referencia es: " << resultado << std::endl;
    
    return 0;
}
