#include "Exe 7 Album.h"
#include <iostream>

void Album::adicionar(Figurinha f) {
    itens.push_back(f);
}

bool Album::possui(int numero) {
    for (size_t i = 0; i < itens.size(); i++) {
        if (itens[i].getNumero() == numero) {
            return true;
        }
    }
    return false;
}

int Album::quantidade() {
    return (int)itens.size();
}

void Album::listar() {
    std::cout << "Album (" << quantidade() << " figurinhas):\n";
    for (size_t i = 0; i < itens.size(); i++) {
        std::cout << "- " << itens[i].resumo() << "\n";
    }
}
