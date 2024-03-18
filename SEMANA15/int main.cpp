#include <iostream>
#include <fstream>
#include <vector>
#include "producto.cpp"

using namespace std;

int main() {
    // Ejemplo de uso
    vector<Producto> listaProductos;

    // Crear instancias de la clase Producto
    Producto producto1(1, "Perez", "Juan", "12345678", "Calle 123", 101, 5000.0, 201, 1, "2024-03-04", 10,
                       301, "Laptop", "Electrónico", "2024-03-01", 1200.0);
    Producto producto2(2, "Gomez", "Maria", "87654321", "Calle 456", 102, 7000.0, 202, 2, "2024-03-05", 8,
                       302, "Smartphone", "Electrónico", "2024-03-02", 800.0);

    // Agregar productos a la lista
    listaProductos.push_back(producto1);
    listaProductos.push_back(producto2);

    // Escribir la lista de productos en un archivo TXT
    ofstream archivo("productos.txt");

    if (archivo.is_open()) {
        for (const auto& producto : listaProductos) {
            archivo << "ID: " << producto.getidProducto() << "\n";
            archivo << "Descripción: " << producto.getdescripcion() << "\n";
            archivo << "Tipo: " << producto.gettipo() << "\n";
            archivo << "Fecha de Producto: " << producto.getfechaProducto() << "\n";
            archivo << "Precio: $" << producto.getprecio() << "\n\n";
        }
        archivo.close();
        cout << "Datos de productos escritos en productos.txt" << endl;
    } else {
        cout << "Error al abrir el archivo productos.txt" << endl;
    }

    return 0;
}

