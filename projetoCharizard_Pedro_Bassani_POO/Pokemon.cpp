#include "Pokemon.h"
#include <iostream>

Pokemon::Pokemon(const std::string& n, int idx, int status)
    : name(n), index(idx), height(0.0f), weight(0.0f) {
    state.statusEvolution = status;
    state.shiny = false;
}

Pokemon::Pokemon(const std::string& n, int idx, PokemonState st)
    : name(n), index(idx), height(0.0f), weight(0.0f), state(st) {}

Pokemon::~Pokemon() {}

PokemonState Pokemon::getState() const { return state; }

void Pokemon::printInfo() const {
    std::cout << "Pokemon: " << name
              << " | idx=" << index
              << " | h=" << height
              << " | w=" << weight
              << " | shiny=" << (state.shiny ? "yes" : "no")
              << " | status=" << state.statusEvolution
              << std::endl;
}