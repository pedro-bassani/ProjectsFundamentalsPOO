#ifndef MINISSERIE_H
#define MINISSERIE_H
#include "Serie.h"
class Minisserie:public Serie{
    int duracaoTotal;
public:
    Minisserie(int id,const std::string&t,int ano,int temp,int epi,int dur);
    void exibirInformacoes() const override;
    std::string toCSV() const override;
};
#endif
