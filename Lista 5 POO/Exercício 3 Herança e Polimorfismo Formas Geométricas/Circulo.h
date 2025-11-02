#ifndef CIRCULO_H
#define CIRCULO_H

#include "FormaGeometrica.h"

class Circulo : public FormaGeometrica {
private:
    double raio_;

public:
    Circulo(double raio);
    double calcularArea() override;
    double calcularPerimetro() override;
};

#endif