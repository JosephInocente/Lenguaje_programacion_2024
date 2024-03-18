#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Clase Persona
class Persona {
protected:
    string identificador;
    string apellidos;
    string nombres;
    string direccion;

public:
    Persona(string identificador, string apellidos, string nombres, string direccion)
        : identificador(identificador), apellidos(apellidos), nombres(nombres), direccion(direccion) {}

    virtual void mostrarDatos() const {
        cout << "Identificador: " << identificador << ", Apellidos: " << apellidos << ", Nombres: " << nombres << ", Dirección: " << direccion << endl;
    }
};

// Clase Empleado, hereda de Persona
class Empleado : public Persona {
protected:
    string codigo;
    int horas_trabajadas;
    double salario_base;
    string area_laboral;

public:
    Empleado(string identificador, string apellidos, string nombres, string direccion, string codigo, int horas_trabajadas, double salario_base, string area_laboral)
        : Persona(identificador, apellidos, nombres, direccion), codigo(codigo), horas_trabajadas(horas_trabajadas), salario_base(salario_base), area_laboral(area_laboral) {}

    virtual double calcularSalario() const {
        return salario_base + (horas_trabajadas * 10); // Suponiendo una tarifa por hora de $10
    }

    void cambiarAreaLaboral(string nueva_area) {
        area_laboral = nueva_area;
    }

    void mostrarDatos() const override {
        Persona::mostrarDatos();
        cout << "Código: " << codigo << ", Horas trabajadas: " << horas_trabajadas << ", Salario base: $" << salario_base << ", Área laboral: " << area_laboral << endl;
    }
};

// Clase Gerente, hereda de Empleado
class Gerente : public Empleado {
private:
    double bono_adicional;

public:
    Gerente(string identificador, string apellidos, string nombres, string direccion, string codigo, int horas_trabajadas, double salario_base, string area_laboral, double bono_adicional)
        : Empleado(identificador, apellidos, nombres, direccion, codigo, horas_trabajadas, salario_base, area_laboral), bono_adicional(bono_adicional) {}

    double calcularSalario() const override {
        return salario_base + (horas_trabajadas * 10) + bono_adicional;
    }

    void mostrarDatos() const override {
        Empleado::mostrarDatos();
        cout << "Bono adicional: $" << bono_adicional << endl;
    }
};

// Clase Departamento
class Departamento {
private:
    string codigo_dep;
    string nombre_dep;
    string rol;

public:
    Departamento(string codigo_dep, string nombre_dep, string rol)
        : codigo_dep(codigo_dep), nombre_dep(nombre_dep), rol(rol) {}

    void cambiarRol(string nuevo_rol) {
        rol = nuevo_rol;
    }

    string getCodigoDep() const {
        return codigo_dep;
    }

    string getNombreDep() const {
        return nombre_dep;
    }

    string getRol() const {
        return rol;
    }
};

int main() {
    // Crear departamentos
    Departamento departamento1("DEP001", "R.R.H.H", "Recursos Humanos");
    Departamento departamento2("DEP002", "Asesoría Judicial", "Jurídico");
    Departamento departamento3("DEP003", "Contabilidad", "Finanzas");
    Departamento departamento4("DEP004", "T.I", "Tecnología de la Información");

    // Crear empleados
    vector<Empleado*> empleados;
    empleados.push_back(new Empleado("001", "Doe", "John", "123 Main St", "EMP001", 40, 3500, "R.R.H.H"));
    empleados.push_back(new Empleado("002", "Smith", "Alice", "456 Elm St", "EMP002", 35, 3500, "R.R.H.H"));
    // Agregar más empleados si es necesario...

    // Crear gerente
    Gerente gerente("003", "Gonzalez", "Maria", "789 Oak St", "GER001", 45, 6500, "R.R.H.H", 3000);

    // Cambiar área laboral de un empleado
    empleados[0]->cambiarAreaLaboral("Asesoría Judicial");

    // Cambiar rol de un departamento
    departamento1.cambiarRol("Recursos Humanos y Nóminas");

    // Mostrar información de los empleados
    cout << "Información de Empleados:" << endl;
    for (const auto& empleado : empleados) {
        empleado->mostrarDatos();
        cout << "Salario: $" << empleado->calcularSalario() << endl;
        cout << endl;
    }

    // Mostrar información del gerente
    cout << "Información del Gerente:" << endl;
    gerente.mostrarDatos();
    cout << "Salario: $" << gerente.calcularSalario() << endl;

    // Mostrar información de los departamentos
    cout << "Información de Departamentos:" << endl;
    cout << "Departamento 1: " << departamento1.getNombreDep() << ", Rol: " << departamento1.getRol() << endl;
    cout << "Departamento 2: " << departamento2.getNombreDep() << ", Rol: " << departamento2.getRol() << endl;
    cout << "Departamento 3: " << departamento3.getNombreDep() << ", Rol: " << departamento3.getRol() << endl;
    cout << "Departamento 4: " << departamento4.getNombreDep() << ", Rol: " << departamento4.getRol() << endl;

    // Liberar memoria de los empleados
    for (auto empleado : empleados) {
        delete empleado;
    }

    return 0;
}
