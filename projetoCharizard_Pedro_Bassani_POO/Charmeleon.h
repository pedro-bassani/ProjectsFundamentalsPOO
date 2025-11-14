#ifndef CHARMELEON_H
#define CHARMELEON_H

#include "FirePokemon.h"

class Charmeleon : public FirePokemon {
public:
    explicit Charmeleon(PokemonState st);
    int getEvolutionTargetIndex() const override;
    void burnUp() const override;
};

#endif