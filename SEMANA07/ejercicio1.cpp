//funciones por valor...

#include <iostream>

int sumaPorValor(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 7;
    int resultado = sumaPorValor(num1, num2);
    
    std::cout << "La suma por valor es: " << resultado << std::endl;
    
    return 0;
}
