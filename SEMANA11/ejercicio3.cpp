#include <iostream>
#include <string>

using namespace std;

class Cliente {
private:
    string nombres;
    string apellidos;
    string direccion;
    string tipo_cliente;
    int año_nacimiento;

public:
    // Constructor
    Cliente(string n, string a, string dir, string tipo, int año)
        : nombres(n), apellidos(a), direccion(dir), tipo_cliente(tipo), año_nacimiento(año) {}

    // Métodos getter and setter
    string getNombres() const {
        return nombres;
    }

    void setNombres(const string& n) {
        nombres = n;
    }

    string getApellidos() const {
        return apellidos;
    }

    void setApellidos(const string& a) {
        apellidos = a;
    }

    string getDireccion() const {
        return direccion;
    }

    void setDireccion(const string& dir) {
        direccion = dir;
    }

    string getTipoCliente() const {
        return tipo_cliente;
    }

    void setTipoCliente(const string& tipo) {
        tipo_cliente = tipo;
    }

    int getAñoNacimiento() const {
        return año_nacimiento;
    }

    void setAñoNacimiento(int año) {
        año_nacimiento = año;
    }

    // Función para calcular el tipo de cliente basado en la edad
    string calcularTipo() const {
        int edad = 2024 - año_nacimiento;

        if (edad >= 0 && edad <= 10) {
            return "TIPOA";
        } else if (edad > 10 && edad <= 20) {
            return "TIPOB";
        } else if (edad > 20 && edad <= 30) {
            return "TIPOC";
        } else if (edad > 30 && edad <= 40) {
            return "TIPOD";
        } else if (edad > 40 && edad <= 50) {
            return "TIPOE";
        } else {
            return "No califica";
        }
    }
};

int main() {
    
    string nombres, apellidos, direccion, tipo_cliente;
    int año_nacimiento;

    cout << "Ingrese nombres: ";
    getline(cin, nombres);

    cout << "Ingrese apellidos: ";
    getline(cin, apellidos);

    cout << "Ingrese direccion: ";
    getline(cin, direccion);

    cout << "Ingrese tipo de cliente: ";
    getline(cin, tipo_cliente);

    cout << "Ingrese año de nacimiento: ";
    cin >> año_nacimiento;

    
    Cliente cliente1(nombres, apellidos, direccion, tipo_cliente, año_nacimiento);

    // Mostrar el tipo de cliente calculado
    cout << "Tipo de cliente: " << cliente1.calcularTipo() << endl;

    return 0;
}
