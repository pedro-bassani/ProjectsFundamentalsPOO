#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FormaGeometrica.h"

class Triangulo : public FormaGeometrica
{
private:
    float base;
    float altura;
    float lado1;
    float lado2;
    float lado3;

public:

    Triangulo(float b, float a, float l1, float l2, float l3)
    {
        base = b;
        altura = a;
        lado1 = l1;
        lado2 = l2;
        lado3 = l3;

        nome = "Triangulo";  
    }

    float calcularArea() override
    {
        return (base * altura) / 2.0f;
    }

    float calcularPerimetro() override
    {
        return lado1 + lado2 + lado3;
    }
};

#endif