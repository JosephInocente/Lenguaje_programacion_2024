#include <iostream>
#include <string>
using namespace std;
// estructura Cliente
struct Cliente {
    string nombre;
    int tipoTarjeta;
    bool tieneDeuda;
};

// Funcion para calcular el aumento del límite de crédito
double calcularAumento(const Cliente& cliente) {
    double aumento = 0.0;

    if (cliente.tipoTarjeta == 1) {
        aumento = cliente.tieneDeuda ? 0.25 / 2.0 : 0.25;

    } else if (cliente.tipoTarjeta == 2) {
        aumento = cliente.tieneDeuda ? 0.35 / 2.0 : 0.35;

    } else if (cliente.tipoTarjeta == 3) {
        aumento = cliente.tieneDeuda ? 0.40 / 2.0 : 0.40;

    } else {
        aumento = cliente.tieneDeuda ? 0.50 / 2.0 : 0.50;
    }

    return aumento;
}

int main() {
    const int numClientes = 3;  
    Cliente clientes[numClientes];

    // Ingreso de datos de los clientes
    for (int i = 0; i < numClientes; ++i) {
        cout << "Ingrese el nombre del cliente " << i + 1 << ": ";
        cin >> clientes[i].nombre;

        cout << "Ingrese el tipo de tarjeta del cliente " << i + 1 << " (1, 2, 3 u otro): ";
        cin >> clientes[i].tipoTarjeta;

        cout << "¿El cliente " << clientes[i].nombre << " tiene deuda? (1 para si, 0 para no): ";
        cin >> clientes[i].tieneDeuda;
    }

    // mostrara el aumento del límite de crédito para cada cliente 
    for (int i = 0; i < numClientes; ++i) {
        double aumento = calcularAumento(clientes[i]);
        cout << "El cliente " << clientes[i].nombre << " tiene un aumento del " << (aumento * 100) << "% en su limite de credito.\n";
    }

    return 0;
}

