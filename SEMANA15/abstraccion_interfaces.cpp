#include <iostream>
#include <cmath> // Para usar la función M_PI en el cálculo del área del círculo
using namespace std;

class FormaGeometrica
{
public:
    virtual void dibujar() const = 0;
    virtual double calcular_Area() const = 0;
};

class Rectangulo : public FormaGeometrica
{
private:
    double base;
    double altura;

public:
    Rectangulo(double l, double a)
    {
        base = l;
        altura = a;
    }

    void dibujar() const override
    {
        cout << "Dibujando el rectángulo" << endl;
    }
    double calcular_Area() const override
    {
        return base * altura;
    }
};

class Triangulo : public FormaGeometrica
{
private:
    double base;
    double altura;

public:
    Triangulo(double b, double a)
    {
        base = b;
        altura = a;
    }

    void dibujar() const override
    {
        cout << "Dibujando el triángulo" << endl;
    }

    double calcular_Area() const override
    {
        return (base * altura) / 2;
    }
};

class Circulo : public FormaGeometrica
{
private:
    double radio;

public:
    Circulo(double r)
    {
        radio = r;
    }

    void dibujar() const override
    {
        cout << "Dibujando el círculo" << endl;
    }

    double calcular_Area() const override
    {
        return M_PI * radio * radio;
    }
};

class Cuadrado : public FormaGeometrica
{
private:
    double lado;

public:
    Cuadrado(double l)
    {
        lado = l;
    }

    void dibujar() const override
    {
        cout << "Dibujando el cuadrado" << endl;
    }

    double calcular_Area() const override
    {
        return lado * lado;
    }
};

class Pentagono : public FormaGeometrica
{
private:
    double lado;

public:
    Pentagono(double l)
    {
        lado = l;
    }

    void dibujar() const override
    {
        cout << "Dibujando el pentágono" << endl;
    }

    double calcular_Area() const override
    {
        return 0.25 * sqrt(5 * (5 + 2 * sqrt(5))) * lado * lado;
    }
};

int main()
{
    FormaGeometrica *formas[5];

    formas[0] = new Rectangulo(3, 4);
    formas[1] = new Triangulo(5, 6);
    formas[2] = new Circulo(2);
    formas[3] = new Cuadrado(4);
    formas[4] = new Pentagono(5);

    for (int i = 0; i < 5; i++)
    {
        cout << "area de la forma " << i + 1 << ": " << formas[i]->calcular_Area() << endl;
    }

    // Liberar memoria
    for (int i = 0; i < 5; i++)
    {
        delete formas[i];
    }

    return 0;
}


//crear 5 formas geometricas, triangulo... implementar el main arreglo de 5 objetos y recorrer con la funcion for y mostrar los objetos
