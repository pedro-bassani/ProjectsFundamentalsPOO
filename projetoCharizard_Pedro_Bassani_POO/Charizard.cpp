#include "Charizard.h"
#include <iostream>

Charizard::Charizard(PokemonState st)
    : Pokemon("Charizard", 3, st),
      FirePokemon("Charizard", 3, st),
      FlyingPokemon("Charizard", 3, st) {
    height = 1.7f;
    weight = 90.5f;
}

int Charizard::getEvolutionTargetIndex() const { return -1; }

void Charizard::printInfo() const {
    std::cout << "Pokemon: " << name << " (Fire/Flying)"
              << " | idx=" << index
              << " | h=" << height
              << " | w=" << weight
              << " | shiny=" << (state.shiny ? "yes" : "no")
              << " | status=" << state.statusEvolution
              << std::endl;
}

void Charizard::burnUp() const { std::cout << "Charizard lança labaredas!" << std::endl; }
void Charizard::fly() const { std::cout << "Charizard alça voo!" << std::endl; }