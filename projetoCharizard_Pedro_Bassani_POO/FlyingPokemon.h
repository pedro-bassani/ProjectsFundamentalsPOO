#ifndef FLYINGPOKEMON_H
#define FLYINGPOKEMON_H

#include "Pokemon.h"

class FlyingPokemon : public virtual Pokemon {
protected:
    FlyingPokemon(const std::string& n, int idx, PokemonState st);

public:
    virtual void fly() const = 0; 
};

#endif