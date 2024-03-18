/*Escribir un programa que implemente una pila y una cola utilizando una lista enlazada y
 reliace algunas operaciones basicas con ella.

 a. cual es la estrategia de una pila
 la estrategia de la pila es LIFO ya que es, el primero en entrar es el ultimo en salir

 b. cual  es la estrategia de la cola
 la estrategia de la pila es FIFO ya que es, el primero en entrar es el primero en salir

c. cree una pila con valores ingresados por el usuario, el tamaño de la pila debe ser como minimo 10
d. desmostrar el contenido de la pila
e. cree una cola, con los valores de la pila
f. mostrar el nuevo contenido de la pila y cola
 */

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

    // Declaración de la pila y la cola
    stack<int> pila;
    queue<int> cola;
   
//esta funcion es para solicitar los valores de la pila
void solicitud_valores(){
     int x=0;
     for (int i = 1; i <= 10; i++)
    {
        cout << "introduzca el valor de la pila " << i << endl;
        cin >> x; 
       
        pila.push(x);
    
    }
}
//esta funcion es para imprimir las pilas
void impresion_pilas(){
     int temp;
    
    cout<<"El contenido de la pila es "<<endl; 
    for (int i=1;i<=10;i++)
    {
        temp=pila.top();
        cout<< pila.top() <<endl;

        pila.pop();
        cola.push(temp);
    }
}
//esta funcion es para imprimir las colas
void impresion_colas(){
    
    cout<<"El contenido de la cola es ";
        while(!cola.empty()){

            cout<<cola.front()<<" ";
            cola.pop();
        }
}
int main()
{
    //llamamos a las funciones ya creadas anteriormente
    solicitud_valores();
    cout<<endl;
    impresion_pilas();
    cout<<endl;
    impresion_colas();
   
    
    return 0;
}