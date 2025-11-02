#ifndef MAGO_H
#define MAGO_H

#include <string>
using namespace std;

class Mago {
protected:
    string nome;
    int poder;

public:
    Mago(string n, int p);
    void andar();
    void falar(string msg = "Olá!");
    void mostrarInfo();
};

#endif