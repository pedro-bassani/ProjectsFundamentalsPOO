#ifndef FIGURINHA_H
#define FIGURINHA_H

#include <string>

class Figurinha {
private:
    int numero;           
    std::string nomeJogador;
    std::string time;

public:
    Figurinha();
    Figurinha(int n, const std::string& nome, const std::string& t);

    void setNumero(int n);
    int getNumero();

    void setNomeJogador(const std::string& nome);
    std::string getNomeJogador();

    void setTime(const std::string& t);
    std::string getTime();

    std::string resumo();
};

#endif
