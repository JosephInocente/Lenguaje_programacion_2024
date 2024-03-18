#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Persona {
protected:
    int id;
    string apellidos;
    string nombres;
    string dni;
    string direccion;

public:
    // Constructor sin p
     Persona(/* args */){
  
    }
    // constructor con p

    Persona(int _id, string _apellidos, string _nombres, string _dni, string _direccion)
    {
        id = _id;
        apellidos = _apellidos;
        nombres = _nombres;
        dni = _dni;
        direccion = _direccion;

    }

    // Getters and Setters
    int getid() const
    {
        return id;
    }

    void Setid(int id)
    {
        id = id;
    }

    string getapellidos() const
    {
        return apellidos;
    }

    void Setapellidos(string apellidos)
    {
        apellidos = apellidos;
    }

    string getdni() const
    {
        return dni;
    }

    void Setdni(string dni)
    {
        dni = dni;
    }

    string getdireccion() const
    {
        return direccion;
    }

    void Setdireccion(string direccion)
    {
        direccion = direccion;
    }

};
