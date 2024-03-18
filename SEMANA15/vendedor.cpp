#include <iostream>
#include <fstream>
#include <vector>
#include "persona.cpp"

using namespace std;

class Vendedor : public Persona {
private:
    int idVendedor;
    double ventas;

public:
     // Constructor sin p
     Vendedor(/* args */){
  
    }
    // constructor con p
    
    Vendedor(int _id, string _apellidos, string _nombres, string _dni, string _direccion, int _idvendedor, double _ventas)
    {
        idVendedor = _idvendedor;
        ventas = _ventas;
    }

    // Getters and Setters
    int getidVendedor() const
    {
        return idVendedor;
    }

    void SetidVendedor(int idVendedor)
    {
        idVendedor = idVendedor;
    }

    double getventas() const
    {
        return ventas;
    }

    void Setventas(double ventas)
    {
        ventas = ventas;
    }

};