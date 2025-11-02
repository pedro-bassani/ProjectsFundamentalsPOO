#ifndef GALINHA_H
#define GALINHA_H

#include "Animal.h"

class Galinha : public Animal {
public:
    Galinha(string n);
    void fazerSom() override; 
};

#endif