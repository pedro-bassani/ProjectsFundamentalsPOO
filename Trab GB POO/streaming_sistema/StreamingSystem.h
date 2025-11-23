#ifndef STREAMINGSYSTEM_H
#define STREAMINGSYSTEM_H
#include <vector>
#include <string>
#include "Midia.h"
class StreamingSystem{
    std::vector<Midia*> catalogo; int nextId;
public:
    StreamingSystem(); ~StreamingSystem();
    void adicionarMidia(const std::string& tipo);
    void listar() const;
    void remover(int id);
    void salvar(const std::string& nome) const;
    void carregar(const std::string& nome);
};
#endif
