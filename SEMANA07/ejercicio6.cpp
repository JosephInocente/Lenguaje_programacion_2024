
#include <iostream>

void incrementarPorReferencia(int& numero) {
    numero++;
}

int main() {
    int num = 5;
    
    std::cout << "Antes del incremento: num = " << num << std::endl;
    
    incrementarPorReferencia(num);
    
    std::cout << "Después del incremento: num = " << num << std::endl;
    
    return 0;
}
