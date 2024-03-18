#include <iostream>
#include <fstream>
#include <vector>
#include "vendedor.cpp"

using namespace std;

class Ventas {
private:
    int idVentas;
    int idProducto;
    string fecha;
    int cantidad;

public:
    // constructor sin p
    Ventas(/* args */){
  
    }
    // Constructor con p
    Ventas(int _id, string _apellidos, string _nombres, string _dni, string _direccion, int _idVendedor, double _ventas, int _idVentas, int _idProducto, string _fecha, int _cantidad)
    {
        idVentas = _idVentas;
        idProducto = _idProducto;
        fecha = _fecha;
        cantidad = _cantidad;

    }

    // Getters and Setters
    int getidVentas() const
    {
        return idVentas;
    }

    void SetidVentas(int idVentas)
    {
        idVentas = idVentas;
    }

    int getidProducto() const
    {
        return idProducto;
    }

    void SetidProducto(int idProducto)
    {
        idProducto = idProducto;
    }

    string getfecha() const
    {
        return fecha;
    }

    void Setfecha(string fecha)
    {
        fecha = fecha;
    }

    int getcantidad() const
    {
        return cantidad;
    }

    void Setcantidad(int cantidad)
    {
        cantidad = cantidad;
    }
};