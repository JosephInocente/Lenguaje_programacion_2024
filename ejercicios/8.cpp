/*escriba un programa que solicite el ingreso de 3 notas al usuario, y luego calcule
el promedio de las notas*/

#include <iostream>
using namespace std;

//esta funcion es para calcular el promedio
void promedio(float nota1,float nota2,float nota3){
    float promedio=0;
    promedio=(nota1+nota2+nota3)/3;
    cout<<"el promedio es "<<promedio;
}

int main(){
    int nota1,nota2,nota3;
    cout<<"ingrese las 3 notas "<<endl;
    cin>>nota1;
    cin>>nota2;
    cin>>nota3;
    promedio(nota1,nota2,nota3);

    return 0;
}