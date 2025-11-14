#ifndef EVOLUTIONMANAGER_H
#define EVOLUTIONMANAGER_H

#include "Charmander.h"
#include "Charmeleon.h"
#include "Charizard.h"

class EvolutionManager {
private:
    Pokemon* createPokemon(int speciesIndex, PokemonState st); 

public:
    Pokemon* captureNew(int speciesIndex); 
    Pokemon* evolve(Pokemon* oldPokemon);  
};

#endif