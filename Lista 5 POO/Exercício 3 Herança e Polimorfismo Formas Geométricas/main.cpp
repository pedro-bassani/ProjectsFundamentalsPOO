#include <iostream>
#include "Retangulo.h"
#include "Circulo.h"
#include "Triangulo.h"
using namespace std;

int main() {
    Retangulo r(5.0, 3.0);
    Circulo c(2.5);
    Triangulo t(6.0, 4.0, 5.0, 4.0, 3.0);

    cout << r.getNome() << " -> Área: " << r.calcularArea()
         << " | Perímetro: " << r.calcularPerimetro() << endl;

    cout << c.getNome() << " -> Área: " << c.calcularArea()
         << " | Perímetro: " << c.calcularPerimetro() << endl;

    cout << t.getNome() << " -> Área: " << t.calcularArea()
         << " | Perímetro: " << t.calcularPerimetro() << endl;

    return 0;
}