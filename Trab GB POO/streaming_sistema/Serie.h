#ifndef SERIE_H
#define SERIE_H
#include "Midia.h"
class Serie:public Midia{
protected:
    int temporadas, episodios;
public:
    Serie(int id,const std::string&t,int ano,int temp,int epi);
    void exibirInformacoes() const override;
    std::string toCSV() const override;
};
#endif
