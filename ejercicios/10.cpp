/*Escriba un programa que simule el juego de adivinar un número. El programa deberá generar  un
número  aleatorio  entre  1  y  100 y pedirle al  usuario  que  adivine  cuál  es.  Si  el usuario ingresa
un número incorrecto, el programa deberá indicarle si el número a adivinar es  mayor  o  menor  al  que  ingresó.
El  juego  termina  cuando  el  usuario  adivina  el  número correcto. */

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int Aleatorio, numero, intentos = 0;

    srand(time(NULL));
    // para generar un aleatorio diferente cada que se ejecuta
    Aleatorio = 1 + rand() % 100;                // funcion para generar un aleatorio
    //cout << "Posibilidad " << Aleatorio << endl; // el numero aleatorio
    cout << "ingrese un numero entre [1-100] " << endl;
    do
    {

       //leemos numero
        do
        {
            cin >> numero;
        } while (numero < 1 || numero > 100);
        // preguntamos si el numero es igual a aleatorio si es asi
        if (numero == Aleatorio)//se ejecuta que gano
        {
            cout << endl
                 << "FELICIDADES HAZ GANADO" << endl;
            cout << "El numero misterioso es: " << Aleatorio << endl;
            cout << "numero de intentos : " << intentos << endl;
        }
        else//pero si numero no es igual a aleatrio se le indica que el numero es mas o menos
        {
            if(numero<Aleatorio){
                cout<<"mas"<<endl;
            }
            else{
                cout<<"menos"<<endl;
            }
        }
        intentos++;
        // usamos el do while para que cuando el numero se igual recien termine de pedir numero
    } while (numero != Aleatorio);

    // imprimimos que ha ganadado y las veces de intentos

    return 0;
}