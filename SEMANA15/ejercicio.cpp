#include <iostream>
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
    Persona(int _id, string _apellidos, string _nombres, string _dni, string _direccion)
    {
        id = _id;
        apellidos = _apellidos;
        nombres = _nombres;
        dni = _dni;
        direccion = _direccion;
    }

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

    string getnombres() const
    {
        return nombres;
    }

    void setnombres(string nombres)
    {
        nombres = nombres;
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

class Vendedor : public Persona {
private:
    int idVendedor;
    double ventas;

public:
    Vendedor(int _id, string _apellidos, string _nombres, string _dni, string _direccion, int _idvendedor, double _ventas)
        : Persona(_id, _apellidos, _nombres, _dni, _direccion), idVendedor(_idvendedor), ventas(_ventas) {}

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

class Producto {
private:
    int idProducto;
    string descripcion;
    string tipo;
    string fechaProducto;
    double precio;

public:
    Producto(int _idProducto, string _descripcion, string _tipo, string _fechaProducto, double _precio)
        : idProducto(_idProducto), descripcion(_descripcion), tipo(_tipo), fechaProducto(_fechaProducto), precio(_precio) {}

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

class Ventas {
private:
    int idVentas;
    int idProducto; // Identificador del producto vendido
    string fecha;
    int cantidad;

public:
    Ventas(int _idVentas, int _idProducto, string _fecha, int _cantidad)
        : idVentas(_idVentas), idProducto(_idProducto), fecha(_fecha), cantidad(_cantidad) {}

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

int main() {
    // Vector de productos
    vector<Producto> productos;

    // Crear productos
    Producto producto1(1, "Laptop", "Electrónico", "2024-03-01", 1200.0);
    Producto producto2(2, "Smartphone", "Electrónico", "2024-03-02", 800.0);
    Producto producto3(3, "Tablet", "Electrónico", "2024-03-03", 500.0);
    Producto producto4(4, "Smartwatch", "Electrónico", "2024-03-04", 300.0);

    // Agregar productos al vector
    productos.push_back(producto1);
    productos.push_back(producto2);
    productos.push_back(producto3);
    productos.push_back(producto4);

    // Vector 
    vector<pair<int, int>> ventas_multi;

    // ventas y vincularlas con productos
    ventas_multi.push_back(make_pair(101, 1)); // Venta 1 del producto 1
    ventas_multi.push_back(make_pair(101, 1)); // Venta 2 del producto 1
    ventas_multi.push_back(make_pair(102, 2)); // Venta 1 del producto 2
    ventas_multi.push_back(make_pair(102, 4)); // Venta 2 del producto 2

    // Vector de vendedores
    vector<Vendedor> vendedores;

    // Crear vendedores
    Vendedor vendedor1(1, "Hurtado", "Joseph", "12345678", "Av. Libertad 123", 101, 0.0);
    Vendedor vendedor2(2, "zegarra", "Juber", "87654321", "Av. Independencia 456", 102, 0.0);

    // Agregar vendedores al vector
    vendedores.push_back(vendedor1);
    vendedores.push_back(vendedor2);

    // Vector de clientes
    vector<Persona> clientes;

    // Crear clientes
    Persona cliente1(1, "Martinez", "Luis", "11111111", "Calle 123");
    Persona cliente2(2, "Rodriguez", "Ana", "22222222", "Calle 456");

    // Agregar clientes al vector
    clientes.push_back(cliente1);
    clientes.push_back(cliente2);

    // Mostrar la información solicitada para el vendedor 1 (vend_01)
    cout << "vend_01. " << vendedor1.getapellidos() << ", " << vendedor1.getnombres() << ":\n";
    cout << "Cliente: " << clientes[0].getapellidos() << ", " << clientes[0].getnombres() << endl;
    cout << "Productos comprados:\n";
    bool vendedor1Encontrado = false;
    for (const auto& venta : ventas_multi) {
        if (venta.first == vendedor1.getidVendedor()) {
            for (const auto& producto : productos) {
                if (venta.second == producto.getidProducto()) {
                    cout << "- " << producto.getdescripcion() << endl;
                    vendedor1Encontrado = true;
                    break; // Solo mostramos un producto
                }
            }
            if (vendedor1Encontrado) {
                break; // Salimos del bucle externo si ya encontramos un producto
            }
        }
    }
    if (!vendedor1Encontrado) {
        cout << "- No se han realizado ventas por este vendedor." << endl;
    }
    cout << endl;

        // Mostrar la información solicitada para el vendedor 2 (vend_02)
    cout << "vend_02. " << vendedor2.getapellidos() << ", " << vendedor2.getnombres() << ":\n";
    cout << "Cliente: " << clientes[1].getapellidos() << ", " << clientes[1].getnombres() << endl;
    cout << "Productos comprados:\n";
    bool vendedor2Encontrado = false;
    for (const auto& venta : ventas_multi) {
        if (venta.first == vendedor2.getidVendedor()) {
            for (const auto& producto : productos) {
                if (venta.second == producto.getidProducto()) {
                    cout << "- " << producto.getdescripcion() << endl;
                    vendedor2Encontrado = true;
                    break; // Evitar repetir productos
                }
            }
        }
    }
    if (!vendedor2Encontrado) {
        cout << "- No se han realizado ventas por este vendedor." << endl;
    }
    cout << endl;

    return 0;
}


