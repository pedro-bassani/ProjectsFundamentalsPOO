#include "Charmander.h"
#include <iostream>

Charmander::Charmander()
    : Pokemon("Charmander", 1, 0), FirePokemon("Charmander", 1, 0) {
    height = 0.6f;
    weight = 8.5f;
}

int Charmander::getEvolutionTargetIndex() const { return 2; }

void Charmander::burnUp() const {
    std::cout << "Charmander usa Brasas!" << std::endl;
}