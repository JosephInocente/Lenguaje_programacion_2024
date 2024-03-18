/*Escriba un programa que simule una calculadora con funciones basicas de suma,resta,division y multiplicacion,
el usuario debe escoger que operacion va a realizar*/

#include <iostream>
using namespace std;
//esta funcion es para solicitar los datos y realizar la suma
void suma()
{   
    int num1,num2;
    cout<<"Introduzca el primer numero"<<endl;
    cin>>num1;
    cout<<"Introduzca el segundo numero"<<endl;
    cin>>num2;
    int suma;
    suma = num1 + num2;//aca se hace la operacion
    cout<<"La suma es "<<suma<<endl;
}
//esta funcion es para solicitar los datos y realizar la resta
void resta()
{   
    int num1,num2;
    cout<<"Introduzca el primer numero"<<endl;
    cin>>num1;
    cout<<"Introduzca el segundo numero"<<endl;
    cin>>num2;
    int resta;
    resta = num1 - num2;//aca se hace la operacion
    cout<<"La resta es "<<resta<<endl;
}
//esta funcion es para solicitar los datos y realizar la division
void division (){
    float num1,num2;
    cout<<"Introduzca el primer numero"<<endl;
    cin>>num1;
    cout<<"Introduzca el segundo numero"<<endl;
    cin>>num2;
    float division=0;//se hace una comparacion que si num2 == 0 
    if(num2==0)
    cout<<"no es valido esta division";
    else{
    division=num1/num2;
    cout<<"La division es "<<division<<endl;
    }
}
//esta funcion es para solicitar los datos y realizar la multiplicacion
    void multiplicacion()
{
    int num1,num2;
    cout<<"Introduzca el primer numero"<<endl;
    cin>>num1;
    cout<<"Introduzca el segundo numero"<<endl;
    cin>>num2;
    int multiplicacion;
    multiplicacion = num1 * num2;
    cout<<"La multiplicacion es "<<multiplicacion<<endl;
}

int main(){

    int operacion;
    cout<<"Ingrese que operacion desea realizar"<<endl
    <<"1 :Suma"<<endl
    <<"2 :Resta"<<endl
    <<"3 :Division"<<endl
    <<"4 :Multiplicacion"<<endl;
    cin>>operacion;
    //hacemos un switch para que el usuario nos diga que operacion desea realizar 
    switch (operacion){
        case 1: 
            suma();
        break;
        case 2: 
            resta();
        break;
        case 3: 
            division();
        break;
        case 4: 
            multiplicacion();
        break;
        default:
        cout<<"La operacion que desea realizar no es valida";
    }
    return 0;
}