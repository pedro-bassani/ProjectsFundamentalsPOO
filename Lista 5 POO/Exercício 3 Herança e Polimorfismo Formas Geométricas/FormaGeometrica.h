#ifndef FORMA_GEOMETRICA_H
#define FORMA_GEOMETRICA_H

#include <string>
using namespace std;

class FormaGeometrica {
protected:
    string nome;
    FormaGeometrica(string n); 

public:
    virtual ~FormaGeometrica();

    virtual double calcularArea() = 0;       
    virtual double calcularPerimetro() = 0;  

    string getNome() { return nome; }
};

#endif