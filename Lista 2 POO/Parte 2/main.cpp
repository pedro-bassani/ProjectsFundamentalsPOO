#include <iostream>
#include "Exe 7 Figurinha.h"
#include "Exe 7 Album.h"

int main() {
    Album a;

    Figurinha f1(10, "Maria Souza", "Selecao A");
    Figurinha f2(7,  "Joao Lima",   "Selecao B");
    Figurinha f3(10, "Maria Souza (extra)", "Selecao A"); 

    a.adicionar(f1);
    a.adicionar(f2);
    a.adicionar(f3);

    std::cout << "Tem a #7? " << (a.possui(7) ? "Sim" : "Nao") << "\n";
    std::cout << "Tem a #9? " << (a.possui(9) ? "Sim" : "Nao") << "\n\n";

    a.listar();

    return 0;
}
