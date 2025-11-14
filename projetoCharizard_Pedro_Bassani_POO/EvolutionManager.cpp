#include "EvolutionManager.h"
#include <iostream>

Pokemon* EvolutionManager::createPokemon(int speciesIndex, PokemonState st) {
    if (speciesIndex == 2) return new Charmeleon(st);
    if (speciesIndex == 3) return new Charizard(st);
    return new Charmander();
}

Pokemon* EvolutionManager::captureNew(int /*speciesIndex*/) {
    return new Charmander();
}

Pokemon* EvolutionManager::evolve(Pokemon* oldPokemon) {
    if (!oldPokemon) return nullptr;

    int target = oldPokemon->getEvolutionTargetIndex();
    if (target == -1) {
        std::cout << "Este Pokemon nao evolui mais." << std::endl;
        return oldPokemon;
    }

    PokemonState st = oldPokemon->getState(); 
    delete oldPokemon;                        
    Pokemon* evolved = createPokemon(target, st); 
    return evolved;                            
}