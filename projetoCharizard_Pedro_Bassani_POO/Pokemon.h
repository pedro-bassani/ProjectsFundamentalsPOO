#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include "PokemonState.h"

class Pokemon {
protected:
    std::string name;
    int index;        
    float height;
    float weight;
    PokemonState state;

    Pokemon(const std::string& n, int idx, int status);
    Pokemon(const std::string& n, int idx, PokemonState st);

public:
    virtual ~Pokemon(); 

    PokemonState getState() const;

    virtual int getEvolutionTargetIndex() const = 0; 
    virtual void printInfo() const;                 
};

#endif