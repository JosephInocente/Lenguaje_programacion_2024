/* Escribir un programa de calcule el area de un triangulo, el parimetro de un triangulo*/

#include <iostream>
using namespace std;
//creamos una funcion para sacar el area 
void area_funcion(){
    float base,altura;
    //pedimos la base del traingulo
    cout<<"ingrese la base del triangulo"<<endl;
    cin>>base;
    //pedimos la altura del triangulo
    cout<<"ingrese la altura del triangulo"<<endl;
    cin>>altura;

 float operacion =0;
 operacion=base*altura/2;//en la variable operacion se pondra la multipliacion de base por altura y luego entre 2 
cout<<"El area del triangulo es : "<<operacion<<endl;
}
//creamos esta funcion para sacar el perimetro
void perimetro_funcion(){
    int lado1,lado2,lado3;
    //solicitamos los lados del triangulo
    cout<<endl<<"Introduce los lados del triangulo"<<endl;
    cin>>lado1;
    cin>>lado2;
    cin>>lado3;
    
    int operacion=0;
    operacion=lado1+lado2+lado3;//en la variable operacion pondremos la suma de toso los lados
cout<<"El perimetro del triangulo es : "<<operacion<<endl;
}

int main(){
    //llamamos a la funciones ya creadas
    area_funcion();
    perimetro_funcion();

    return 0;
}