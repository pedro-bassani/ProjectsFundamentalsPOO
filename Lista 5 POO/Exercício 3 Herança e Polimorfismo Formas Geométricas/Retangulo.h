#ifndef RETANGULO_H
#define RETANGULO_H

#include "FormaGeometrica.h"

class Retangulo : public FormaGeometrica {
private:
    double base_, altura_;

public:
    Retangulo(double base, double altura);
    double calcularArea() override;
    double calcularPerimetro() override;
};

#endif