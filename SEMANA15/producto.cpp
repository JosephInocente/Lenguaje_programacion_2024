#include <iostream>
#include <fstream>
#include <vector>
#include "ventas.cpp"

using namespace std;

class Producto {
private:
    int idProducto;
    string descripcion;
    string tipo;
    string fechaProducto;
    double precio;

public:
    // Constructor
    Producto(int _id, string _apellidos, string _nombres, string _dni, string _direccion, int _idVendedor, double _ventas, int _idVentas, int _idProducto, string _fecha, int _cantidad, int _idProductoProducto, string _descripcion, string _tipo, string _fechaProducto, double _precio)
    {
        idProducto = _idProductoProducto;
        descripcion = _descripcion;
        tipo = _tipo;
        fechaProducto = _fechaProducto;
        precio = _precio;
    }

    // Getters and Setters
    int getidProducto() const
    {
        return idProducto;
    }

    void SetidProducto(int idProducto)
    {
        idProducto = idProducto;
    }

    string getdescripcion() const
    {
        return descripcion;
    }

    void Setdescripcion(string descripcion)
    {
        descripcion = descripcion;
    }

    string gettipo() const
    {
        return tipo;
    }

    void Settipo(string tipo)
    {
        tipo = tipo;
    }

    string getfechaProducto() const
    {
        return fechaProducto;
    }

    void SetfechaProducto(string fechaProducto)
    {
        fechaProducto = fechaProducto;
    }

    double getprecio() const
    {
        return precio;
    }

    void Setprecio(double precio)
    {
        precio = precio;
    }

};
