#include "Circulo.h"

static const double PI_EX3 = 3.14159; 

Circulo::Circulo(double raio)
    : FormaGeometrica("Círculo"), raio_(raio) {}

double Circulo::calcularArea() {
    return PI_EX3 * raio_ * raio_;
}

double Circulo::calcularPerimetro() {
    return 2 * PI_EX3 * raio_;
}