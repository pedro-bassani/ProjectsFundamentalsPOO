#include "Charmeleon.h"
#include <iostream>

Charmeleon::Charmeleon(PokemonState st)
    : Pokemon("Charmeleon", 2, st), FirePokemon("Charmeleon", 2, st) {
    height = 1.1f;
    weight = 19.0f;
}

int Charmeleon::getEvolutionTargetIndex() const { return 3; }

void Charmeleon::burnUp() const {
    std::cout << "Charmeleon intensifica as chamas!" << std::endl;
}