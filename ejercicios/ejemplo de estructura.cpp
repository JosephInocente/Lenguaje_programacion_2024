#include <iostream>
#include <string>
using namespace std;


struct Alumno
{
    string nombre;
    string apellido;
    int edad;
    float nota;
};

int main()
{
    Alumno alumno1;
    alumno1.nombre = "joseph";
    alumno1.apellido = "inocente";
    alumno1.edad = 20;
    alumno1.nota = 17.5;

    cout<< " datos del alumno "<< endl;
    cout<< " nombre "<< endl;
    cout<< "apellido "<< endl;
    cout<< "edad "<< endl;
    cout<< "nota "<<endl;


    return 0;

}