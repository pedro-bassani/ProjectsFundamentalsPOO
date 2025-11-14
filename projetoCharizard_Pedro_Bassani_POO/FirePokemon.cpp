#include "FirePokemon.h"

FirePokemon::FirePokemon(const std::string& n, int idx, int status)
    : Pokemon(n, idx, status) {}

FirePokemon::FirePokemon(const std::string& n, int idx, PokemonState st)
    : Pokemon(n, idx, st) {}