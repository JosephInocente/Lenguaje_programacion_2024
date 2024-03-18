
//elaborar un programa que ingrese la nota alfanumérica y retorne el rango de notas
//      A => 19 -18
//      B => 17 - 14
//      C => 14 - 11
//      D => 10 - 5
//      E => 5 - 0

#include <iostream>
using namespace std;

int main()
{
    char nota;

    cout<< "ingrese su nota correspondiente de la A-E: "<<endl;
    cin>> nota;

    switch(nota){
        case 'A':
        cout<<"su nota esta entre 18-19";
        break;
        case 'B':
        cout<<"su nota esta entre 14-17";
        break;
        case 'C':
        cout<<"su nota esta entre 11-14";
        break;
        case 'D':
        cout<<"su nota esta entre 5-10";
        break;
        case 'E':
        cout<<"su nota esta entre 0-5";
        break;

        default:
        cout << "Opción no válida." <<endl;
        break;

    }

    return 0;

}

