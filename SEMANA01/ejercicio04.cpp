//comprobar si un numero es par o impar

#include <iostream>
using namespace std;
int main()
{
    int numero;

    cout<< "ingrese un numero entero: "<<endl;
    cin>> numero;

    if (numero % 2 == 0)
    {
        cout<< "el numero es par"<<endl;

    } 
    else 
    {
        cout<< "el numero es impar"<<endl;

    }

    return 0;
}