//calculadora simple

#include <iostream>
using namespace std;
int main()
{
    char opcion;
    double num1, num2, a, b, c, d;

    cout<< "que operacion desea realizar? "<<endl;
    cout<< "A------------> SUMA "<<endl;
    cout<< "B------------> RESTA "<<endl;
    cout<< "C------------> MULTIPLICACION "<<endl;
    cout<< "D------------> DIVISION "<<endl;
    cout<< "ingrese una opcion del A-D:"<<endl;

    cin>> opcion;

    switch (opcion)
    {
        case 'A':
        cout<< "ingrese un numero: "<<endl;
        cin>> num1;
        cout<< "ingrese un segundo numero: "<<endl;
        cin>> num2;

        a=num1+num2;

        cout<< "la suma es: "<<a<<endl;
        break;

        case 'B':
        cout<< "ingrese un numero: "<<endl;
        cin>> num1;
        cout<< "ingrese un segundo numero: "<<endl;
        cin>> num2;

        b=num1-num2;

        cout<< "la resta es: "<<b<<endl;
        break;

        case 'C':
        cout<< "ingrese un numero: "<<endl;
        cin>> num1;
        cout<< "ingrese un segundo numero: "<<endl;
        cin>> num2;

        c=num1*num2;

        cout<< "la multiplicacion es: "<<c<<endl;
        break;

        case 'D':
        if(num2 != 0)
        {
        cout<< "ingrese un numero: "<<endl;
        cin>> num1;
        cout<< "ingrese un segundo numero: "<<endl;
        cin>> num2;
        
        d=num1/num2;

        cout<< "la division es: "<<d<<endl;
        }
        else
        {
            cout<< "error division por cero."<<endl;
        }
        break;

        default:
        cout<< "opcion invalida...."<<endl;
        
    }

    return 0;
 

}