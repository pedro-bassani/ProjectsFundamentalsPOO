#ifndef CHARMANDER_H
#define CHARMANDER_H

#include "FirePokemon.h"

class Charmander : public FirePokemon {
public:
    Charmander(); 
    int getEvolutionTargetIndex() const override;
    void burnUp() const override;
};

#endif