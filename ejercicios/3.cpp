/*Escribir un programa que solicite al usuario un arreglo y luego ordene el numero de mayor a menor y de menor a mayor*/

#include <iostream>
using namespace std;
//esta funcion es para ordenar los numeros de mayor a menor
void mayor_menor(int arreglo[],int tamanio){

    int tempo;
    //lo que hace este for anidado es 
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = 0; j < tamanio - 1; j++)
        {
            if (arreglo[j] < arreglo[j + 1])//hace lacomparacion que si arreglo[j] es menor que arreglo[j+1] se ejecuta lo siguiente
            {
                tempo = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = tempo;
            }
        }
    }
    cout << endl
         << "El arreglo ordenado de mayor a menor es: ";
    for (int i = 0; i < tamanio; i++)
    {
        cout << arreglo[i] << " ";
    }
}
//esta fucnion es para ordenar el numero de menor a mayor
void menor_mayor (int arreglo[],int tamanio){

    int tempo;
    //este for anidado es 
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = 0; j < tamanio - 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1])//hace lacomparacion que si arreglo[j] es mayo que arreglo[j+1] se ejecuta lo siguiente
            {
                tempo = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = tempo;
            }
        }
    }
    cout << endl
         << "El arreglo ordenado de menor a mayor es: ";
    for (int i = 0; i < tamanio; i++)
    {
        cout << arreglo[i] << " ";
    }

}


int main()
{
    int arreglo[5];
    int tamanio = sizeof(arreglo) / sizeof(arreglo[0]); // creamos tamanio con el tamaño del arreglo
    
    // se hace un for para solicitar los datos y ponerlos en su respectivo arreglo
    for (int i = 0; i < tamanio; i++)
    {
        cout << "ingrese los valores" << endl;
        cin >> arreglo[i];
    }
    //llamamos a las funciones ya creadas
    mayor_menor(arreglo,tamanio);
    menor_mayor(arreglo,tamanio);


return 0;
}