/*Escribir un programa que encuentre el numero mayor, el numero menor, el promedio, la mediana,
cual es el numero que se repite mas veces de un arreglo enteros de 10 items*/

#include <iostream>
using namespace std;
//esta funcion es para hallar el numero mayor
void numero_mayor(int arreglo[],int tamanio){
    
    int mayor = arreglo[0]; // asigamos la variable mayor como a[0]
    for (int i = 1; i < tamanio; i++)// ponemos que el for comience en 1 porque el 0 ya lo tenemos asignado
    {
        if (arreglo[i] > mayor) // usamos el if para hacer una comparacion del primer arreglo a[1] si es "mayor" que a[0]
         //osea la variable mayor
        {
            mayor = arreglo[i];
        }
    }
    cout<<"El numero mayor es : "<<mayor<<endl;
}
//esta funcion es para hallar el numero menor 
void numero_menor(int arreglo[],int tamanio){
    
    int menor = arreglo[0]; // asigamos la variable menor como a[0]
    for (int i = 1; i < tamanio; i++)// ponemos que el for comience en 1 porque el 0 ya lo tenemos asignado
    {
        if (arreglo[i] < menor) // usamos el if para hacer una comparacion del primer arreglo a[1] si es "menor" que a[0]
         //osea la variable menor
        {
            menor = arreglo[i];
        }
    }
    cout<<"El numero menor es : "<<menor<<endl;
    }

//esta funcion la usaremos para hallar el promedio del arreglo
void promedio(int arreglo[],int tamanio){
    float suma=0;
    float promedio=0;
    //este for es para hallar la suma del arreglo
    for(int i =0; i <tamanio;i++){
        suma+=arreglo[i];
    }
promedio=suma/tamanio;//para hallar el promedio hacemos esta operaccion
cout<<"El promedio es :"<<promedio<<endl; 
}
//esta funcion es para hallar la mediana
void mediana(int arreglo[],int tamanio){
int tempo;
//este for lo hacemos para ordenar el arreglo de menor a mayor
for (int i = 0; i < tamanio; i++){
        for (int j = 0; j < tamanio - 1; j++){//con este for hacemos que comience desde 0 hasta tamanio-1
         //para que no se haga el recorrido hasta el ultimo
            if (arreglo[j] > arreglo[j + 1])//hacemos la comparacion de que a[j] sea mayor que a[j+1] si esto se cumple se ejecuta lo siguiente
            {
                tempo = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = tempo;
            }
        }
    }
    //lo siguiente mas el for es para imprimir el orden de menor a mayor
     cout << endl
         << "El arreglo ordenado de menor a mayor es: ";

    for (int i = 0; i < tamanio; i++)
    {
        cout << arreglo[i] << " ";
    }
    // estas son las operaciones necesarias para sacar la mediana
    int mediana,mediana2,i,mediana_final;
    i = tamanio / 2;
    mediana = i - 1;
    mediana2 = i;
    mediana_final=(arreglo[mediana]+arreglo[mediana2])/2;//esta es la operacion final para hallar la mediana
    cout << endl  << "la mediana es " << mediana_final<<endl;
}
//esta funcion es para hallar el numero que se repite
void numero_repite(int arreglo[],int tamanio){
    cout << "los numeros que se repiten en el arreglo son: ";

    for (int i = 0; i < tamanio - 1; i++)//tamanio-1 para que i se ejecute hasta un numero antes
    {
        for (int j = i + 1; j < tamanio; j++)//j=i+1 quiere decir que cada vez que avanze i el j avanza uno mas
        {
            //hacemos la comparacion que si arreglo[i] es igual que arreglo[j] entonces
            if (arreglo[i] == arreglo[j])
            {
                cout << arreglo[i] << ", ";//que imprima el arreglo [i]
                break;
            }
        }
    }

}

int main(){
    int arreglo[10]={2,5,6,8,2,1,9,5,7,3};
    int tamanio = sizeof(arreglo)/sizeof(arreglo[0]);

    numero_mayor(arreglo,tamanio);
    numero_menor(arreglo,tamanio);
    promedio(arreglo,tamanio);
    mediana(arreglo,tamanio);
    numero_repite(arreglo,tamanio);

    return 0;
}