#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
protected:
    string nome;

public:
    Animal(string n);
    virtual ~Animal();

    virtual void fazerSom() = 0;

    string getNome() { return nome; }
};

#endif