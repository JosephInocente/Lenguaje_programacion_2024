#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Libro {
    string titulo;
    string autor;
    int añoPublicacion;
};

int main() {
    // vector de estructuras Libro
    vector<Libro> libros;

    // ingresar información para varios libros
    int numLibros;
    cout << "Ingrese el número de libros: ";
    cin >> numLibros;

    for (int i = 0; i < numLibros; ++i) {
        Libro libro;

        // Solicitar información para cada libro
        cout << "\nLibro " << i + 1 << ":\n";
        cout << "Título: ";
        cin.ignore(); // Para limpiar el buffer del teclado antes de getline
        getline(cin, libro.titulo);

        cout << "Autor: ";
        getline(cin, libro.autor);

        cout << "Año de publicación: ";
        cin >> libro.añoPublicacion;

        // Agregar el libro al vector
        libros.push_back(libro);
    }

    // Mostrar la información de todos los libros
    cout << "\nInformación de todos los libros:\n";
    for (const auto& libro : libros) {
        cout << "Título: " << libro.titulo << "\nAutor: " << libro.autor
             << "\nAño de publicación: " << libro.añoPublicacion << "\n\n";
    }

    return 0;
}
