//area de un rectangulo

#include <iostream>
using namespace std;
int main()
{
    double longitud, ancho, area;

    cout<< "ingrese la longitud del rectangulo: "<<endl;
    cin>> longitud;
    cout<< "ingrese el ancho del rectangulo: "<<endl;
    cin>> ancho;

    area= longitud*ancho;

    cout<< " el area del rectangulo es: "<<area<<endl;

    return 0;

}