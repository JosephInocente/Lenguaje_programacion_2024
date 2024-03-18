#include <iostream>
#include <string>
using namespace std;

// Clase TipoContacto
class TipoContacto
{
private:
    // atributos
    string id;
    string correo;
    string telefono;

public:
    // Constructor de TipoContacto
    TipoContacto(string id, string correo, string telefono)
    {
        this->id = id;
        this->correo = correo;
        this->telefono = telefono;
    }
    // metodos y funciones

    void setCorreo(string newCorreo)
    {
        this->correo = newCorreo;
    }

    string getCorreo()
    {
        return correo;
    }

    void setTelefono(string newTelefono)
    {
        this->telefono = newTelefono;
    }

    string getTelefono()
    {
        return telefono;
    }
};

// Clase Departamento
class Departamento
{
private:
    // atributos
    string codigo_dep;
    string nombre_dep;

public:
    // Constructor de Departamento
    Departamento(string codigo_dep, string nombre_dep)
    {
        this->codigo_dep = codigo_dep;
        this->nombre_dep = nombre_dep;
    }

    // Métodos para establecer y obtener la informacion del departamento
    void setCodigoDep(string newCodigo)
    {
        this->codigo_dep = newCodigo;
    }

    string getCodigoDep()
    {
        return codigo_dep;
    }

    void setNombreDep(string newNombre)
    {
        this->nombre_dep = newNombre;
    }

    string getNombreDep()
    {
        return nombre_dep;
    }
};

class Persona
{
private:
    // atributos
    string identificador;
    string apellidos;
    string nombres;
    string direccion;
    TipoContacto contacto;

public:
    // Constructor de tipo persona
    Persona(string identificador, string apellidos, string nombres, string direccion, TipoContacto contacto) : contacto(contacto)
    {
        this->identificador = identificador;
        this->apellidos = apellidos;
        this->nombres = nombres;
        this->direccion = direccion;
        this->contacto = contacto;
    }
    // Metodos y funciones
    string getIdentificador()
    {
        return identificador;
    }

    void setIdentificador(string identificador)
    {
        this->identificador = identificador;
    }

    string getApellidos()
    {
        return apellidos;
    }

    void setApellidos(string apellidos)
    {
        this->apellidos = apellidos;
    }

    string getNombres()
    {
        return nombres;
    }

    void setNombres(string nombres)
    {
        this->nombres = nombres;
    }

    string getDireccion()
    {
        return direccion;
    }

    void setDireccion(string direccion)
    {
        this->direccion = direccion;
    }

    virtual double calcular_salario()
    {
    }
};

class Empleado : public Persona
{
protected:
    string codigo;
    double costo_hm;
    Departamento *departamento;
    double salario;

public:
    Empleado(string identificador, string apellidos, string nombres, string direccion, TipoContacto contacto, string codigo, double costo_hm, Departamento *departamento, double salario) : Persona(identificador, apellidos, nombres, direccion, contacto),
                                                                                                                                                                                            departamento(departamento)
    {
        this->codigo = codigo;
        this->costo_hm = costo_hm;
        this->salario = salario;
    }

    string getCodigo()
    {
        return codigo;
    }

    void setCodigo(string codigo)
    {
        this->codigo = codigo;
    }

    double getCosto_hm()
    {
        return costo_hm;
    }

    void setCosto_hm(double costo_hm)
    {
        this->costo_hm = costo_hm;
    }

    string getDepartamentoNombre() const
    {
        return departamento->getNombreDep();
    }

    double getSalario()
    {
        return salario;
    }

    void setsalario(double salario)
    {
        this->salario = salario;
    }
};

class Gerente : public Empleado
{
private:
    double bono;

public:
    Gerente(string identificador, string apellidos, string nombres, string direccion, TipoContacto contacto, string codigo, double costo_hm, Departamento *departamento, double salario, double bono) : Empleado(identificador, apellidos, nombres, direccion, contacto, codigo, costo_hm, departamento, salario), bono(bono)
    {
        this->bono = bono;
    }

    double getBono()
    {
        return bono;
    }

    void setBono(double bono)
    {
        this->bono = bono;
    }

    double calcular_salario()
    {
        return salario + bono;
    }
};

class Ingeniero : public Empleado
{
private:
    int horas_extra;

public:
    Ingeniero(string identificador, string apellidos, string nombres, string direccion, TipoContacto contacto, string codigo, double costo_hm, Departamento *departamento, double salario, int horas_extra) : Empleado(identificador, apellidos, nombres, direccion, contacto, codigo, costo_hm, departamento, salario), horas_extra(horas_extra)
    {
        this->horas_extra = horas_extra;
    }

    int getHoras_extra()
    {
        return horas_extra;
    }

    void setHoras_extra(int horas_extra)
    {
        this->horas_extra = horas_extra;
    }

    double calcularSalario()
    {
        return getSalario() + horas_extra * getCosto_hm();
    }
};

int main()
{
    // Instancia de TipoContacto
    TipoContacto contacto1("1", "correo1@example.com", "1234567890");
    TipoContacto contacto2("2", "correo2@example.com", "0987654321");
    TipoContacto contacto3("3", "correo3@example.com", "1122334455");
    TipoContacto contacto4("4", "correo4@example.com", "2233445566");
    TipoContacto contacto5("5", "correo5@example.com", "3344556677");

    // Crear un objeto Departamento para compartir entre Empleados
    Departamento dep("IT", "Tecnologias de la Informacion");

    // Crear objetos Ingeniero y Gerente usando los contactos y departamento creados
    Ingeniero ingeniero1("001", "Gonzales", "Jose", "Jr.Aguaytia", contacto1, "0024", 50, &dep, 2500, 14);
    Ingeniero ingeniero2("002", "Gomez", "Carlos", "Calle Falsa 123", contacto2, "0025", 50, &dep, 2600, 14);
    Ingeniero ingeniero3("003", "Diaz", "Maria", "Av. Siempre Viva", contacto3, "0026", 50, &dep, 2400, 14);
    Ingeniero ingeniero4("004", "Perez", "Ana", "Av. Los Precursores", contacto4, "0027", 50, &dep, 2700, 14);

    Gerente gerente1("005", "Hurtado", "Leo", "Av.Venezuela", contacto5, "0021", 4.0, &dep, 3500, 500);

    // Usamos un arreglo de punteros a Persona para almacenar los Ingenieros y el Gerente
    Ingeniero arrayIngenieros[] = {ingeniero1, ingeniero2, ingeniero3, ingeniero4};
    int tamanioArrayIngenieros = sizeof(arrayIngenieros) / sizeof(arrayIngenieros[0]);

    for (int i = 0; i < tamanioArrayIngenieros; ++i)
    {
        // Calcula el salario con las horas extra ya asignadas en el constructor
        double salarioFinal = arrayIngenieros[i].calcularSalario();

        // Imprime la información de cada ingeniero
        cout << "------------------" << endl;
        cout << "|  INGENIERO [" << i + 1 << "]|" << endl;
        cout << "------------------" << endl;
        cout << "Apellidos: " << arrayIngenieros[i].getApellidos() << endl;
        cout << "Nombres: " << arrayIngenieros[i].getNombres() << endl;
        cout << "Departamento: " << arrayIngenieros[i].getDepartamentoNombre() << endl; // Asumiendo que esta función ya existe y devuelve el nombre del departamento
        cout << "Direccion: " << arrayIngenieros[i].getDireccion() << endl;
        cout << "Salario Final: " << salarioFinal << endl;
    }

    ////////////////////////////////////////////
    // Calcular el salario inicial y mostrar los datos del gerente
    cout << "----------------------------" << endl;
    cout << "|  INFORMACION DEL GERENTE  |" << endl;
    cout << "----------------------------" << endl;
    cout << "Datos del Gerente antes de actualizar el bono:" << endl;
    cout << "Apellidos: " << gerente1.getApellidos() << endl;
    cout << "Nombres: " << gerente1.getNombres() << endl;
    cout << "Departamento: " << gerente1.getDepartamentoNombre() << endl;
    cout << "Dirección: " << gerente1.getDireccion() << endl;
    cout << "Salario Final (con bono inicial): " << gerente1.calcular_salario() << endl;

    // Actualizar el bono del gerente a 2500 y mostrar los nuevos datos
    gerente1.setBono(2500);

    cout << "----------------------------" << endl;
    cout << "|  INFORMACION DEL GERENTE  |" << endl;
    cout << "----------------------------" << endl;
    cout << "Datos del Gerente despues de actualizar el bono:" << endl;
    cout << "Apellidos: " << gerente1.getApellidos() << endl;
    cout << "Nombres: " << gerente1.getNombres() << endl;
    cout << "Departamento: " << gerente1.getDepartamentoNombre() << endl;
    cout << "Direccion: " << gerente1.getDireccion() << endl;
    cout << "Salario Final (con bono actualizado): " << gerente1.calcular_salario() << endl;

    return 0;
}