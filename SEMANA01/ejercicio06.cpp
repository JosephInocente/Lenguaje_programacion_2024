//tabla de multiplicacion

#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Ingrese un número para ver su tabla de multiplicar: "<<endl;
    cin >> numero;

    for (int i = 1; i <= 13; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;

}