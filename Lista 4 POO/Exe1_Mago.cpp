#include "Exe1_Mago.h"
Mago::Mago() : nome(""), idade(0), escola("") {}
Mago::Mago(const std::string& n, int i, const std::string& e) : nome(n), idade(i), escola(e) {}
void Mago::setNome(const std::string& n) { nome = n; }
void Mago::setIdade(int i) { idade = i; }
void Mago::setEscola(const std::string& e) { escola = e; }
std::string Mago::getNome() const { return nome; }
int Mago::getIdade() const { return idade; }
std::string Mago::getEscola() const { return escola; }
