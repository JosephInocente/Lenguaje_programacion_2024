/* Escribir un programa que calcule la suma de los numeros pares e impares de un arreglo de enteros */

#include <iostream>
using namespace std;
//esta funcion esta hecha para hacer la suma del arreglo
void Suma(int arreglo[],int tamanio){
    int suma_par=0;
    int suma_impar=0;
    for(int i=0;i<tamanio;i++){
        if (arreglo[i]%2==0){
            suma_par+=arreglo[i];//aca se hace la suma de los numeros pares
        }
        else{
            suma_impar+=arreglo[i];//aca se hace la suma de los numeros impares
        }
    }    
    cout<<"la suma de los numeros pares es "<<suma_par<<endl;
    cout<<"la suma de los numeros impares es "<<suma_impar<<endl;
}
int main (){
    int arreglo[]={1,2,3,4,5,6};
    int tamanio=sizeof(arreglo)/sizeof(arreglo[0]);
    Suma(arreglo,tamanio);

    return 0;
}