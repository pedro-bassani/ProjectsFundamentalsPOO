#include "Triangulo.h"

Triangulo::Triangulo(double base, double altura, double l1, double l2, double l3)
    : FormaGeometrica("Triângulo"),
      base_(base), altura_(altura), l1_(l1), l2_(l2), l3_(l3) {}

double Triangulo::calcularArea() {
    return (base_ * altura_) / 2.0;
}

double Triangulo::calcularPerimetro() {
    return l1_ + l2_ + l3_;
}