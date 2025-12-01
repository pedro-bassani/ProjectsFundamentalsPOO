#ifndef RETANGULO_H
#define RETANGULO_H

#include "FormaGeometrica.h"

class Retangulo : public FormaGeometrica
{
private:
    float base;
    float altura;

public:

    Retangulo(float b, float a)
    {
        base = b;
        altura = a;
        nome = "Retangulo";
    }

    float calcularArea() override
    {
        return base * altura;
    }

    float calcularPerimetro() override
    {
        return 2 * (base + altura);
    }
};

#endif
