#ifndef CHARIZARD_H
#define CHARIZARD_H

#include "FirePokemon.h"
#include "FlyingPokemon.h"

class Charizard : public FirePokemon, public FlyingPokemon {
public:
    explicit Charizard(PokemonState st);

    int getEvolutionTargetIndex() const override;
    void printInfo() const override;

    void burnUp() const override;
    void fly() const override;
};

#endif