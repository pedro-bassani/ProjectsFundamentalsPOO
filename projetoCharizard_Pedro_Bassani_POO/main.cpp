#include <iostream>
#include <vector>
#include "EvolutionManager.h"

int main() {
    EvolutionManager manager;
    std::vector<Pokemon*> bag;

    Pokemon* p = manager.captureNew(1);
    bag.push_back(p);

    std::cout << "=== Capturado ===\n";
    bag.back()->printInfo();

    bag.back() = manager.evolve(bag.back());
    std::cout << "=== Depois da 1a evolucao ===\n";
    bag.back()->printInfo();

    bag.back() = manager.evolve(bag.back());
    std::cout << "=== Depois da 2a evolucao ===\n";
    bag.back()->printInfo();

    if (auto cz = dynamic_cast<Charizard*>(bag.back())) {
        cz->burnUp();
        cz->fly();
    }

    for (Pokemon* ptr : bag) delete ptr;
    bag.clear();

    return 0;
}