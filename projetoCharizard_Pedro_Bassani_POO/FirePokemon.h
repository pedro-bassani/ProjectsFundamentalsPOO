#ifndef FIREPOKEMON_H
#define FIREPOKEMON_H

#include "Pokemon.h"

class FirePokemon : public virtual Pokemon {
protected:
    FirePokemon(const std::string& n, int idx, int status);
    FirePokemon(const std::string& n, int idx, PokemonState st);

public:
    virtual void burnUp() const = 0; 
};

#endif