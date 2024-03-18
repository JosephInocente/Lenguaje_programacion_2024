/*Escriba un programa que solicite al usuario ingresar un numero entero positivo y luego imprima ala secuencia de numeros
desde el 1 hasta el numero ingresado, pero reemplazar los multiplos de 3 por la palabra "Fizz" y los multipos de 5
 por la palabra "Buzz"
 si el numero es el numero es multiplo de 3 como de 5, imprimir "FizzBuzz"*/

#include <iostream>
using namespace std;
// esta funcion es para hacer el cambio de "Fizz" y de "Buzz"
void cambio(int num)
{
    cout << "Los numeros son:  " << endl;
    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0)//multiplo de 3
        {
          
            if (i % 5 == 0)
            {
                
                cout << "FizzBuzz" << endl;
            }
            else
            {
               
                cout << "Fizz" << endl;
            }
        }
        else if (i % 5 == 0)//multiplo de 5
        {
           
            if (i % 3 == 0)
            {
               
                cout << "FizzBuzz" << endl;
            }
            else
            {
                
                cout << "Buzz" << endl;
            }
        }
        else
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int num;
    cout << "ingresa el numero limite "<< endl;
    cin >> num;
    // llamamos a la funcion mencionada
    cambio(num);

    return 0;
}