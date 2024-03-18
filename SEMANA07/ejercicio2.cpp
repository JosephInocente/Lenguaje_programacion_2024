#include <iostream>

void intercambiarPorValor(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 7;
    
    std::cout << "Antes del intercambio: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    
    intercambiarPorValor(num1, num2);
    
    std::cout << "Después del intercambio: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    
    return 0;
}
