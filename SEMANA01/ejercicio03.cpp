//conversion de grados celsius a fahrenheit

#include <iostream>
using namespace std;
int main()
{
    double celsius, fahrenheit;

    cout<< "ingrese la temperatura en grados celsius: "<<endl;
    cin>> celsius;

    fahrenheit=(celsius*9/5)+32;

    cout<< "la temperatura en grados fahrenheit es: "<<fahrenheit<<endl;

    return 0;

}
