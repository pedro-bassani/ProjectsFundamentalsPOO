#ifndef FILME_H
#define FILME_H
#include "Midia.h"
class Filme:public Midia{
    int duracao; std::string diretor;
public:
    Filme(int id,const std::string&t,int ano,int d);
    Filme(int id,const std::string&t,int ano,int d,const std::string&dir);
    void exibirInformacoes() const override;
    std::string toCSV() const override;
};
#endif
