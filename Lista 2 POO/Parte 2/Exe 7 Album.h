#ifndef ALBUM_H
#define ALBUM_H

#include <vector>
#include "Exe 7 Figurinha.h"

class Album {
private:
    std::vector<Figurinha> itens;

public:
    void adicionar(Figurinha f);
    bool possui(int numero);
    int quantidade();
    void listar();
};

#endif
