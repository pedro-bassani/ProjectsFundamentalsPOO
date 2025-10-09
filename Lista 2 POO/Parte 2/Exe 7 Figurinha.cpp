#include "Exe 7 Figurinha.h"

Figurinha::Figurinha() {
    numero = 1;
    nomeJogador = "Sem Nome";
    time = "Sem Time";
}

Figurinha::Figurinha(int n, const std::string& nome, const std::string& t) {
    setNumero(n);
    nomeJogador = nome;
    time = t;
}

void Figurinha::setNumero(int n) {
    if (n <= 0) n = 1; 
    numero = n;
}
int Figurinha::getNumero() { return numero; }

void Figurinha::setNomeJogador(const std::string& nome) { nomeJogador = nome; }
std::string Figurinha::getNomeJogador() { return nomeJogador; }

void Figurinha::setTime(const std::string& t) { time = t; }
std::string Figurinha::getTime() { return time; }

std::string Figurinha::resumo() {
    return "#" + std::to_string(numero) + " - " + nomeJogador + " (" + time + ")";
}
