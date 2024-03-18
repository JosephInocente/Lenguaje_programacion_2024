#include <iostream>
#include <string>
#include "carrovan.cpp"
using namespace std;

int main(){

    CarroVan carro_van(1,16,"1500 cc","2.0 petrolero",1,"Van",2024,"Rosa","Hyundai");
    cout<<carro_van.getModelo();

    cout<<carro_van.getAñoFabricacion();
    
    return 0;
}