#ifndef CORPO_CELESTE_H
#define CORPO_CELESTE_H

#include <string>

enum TipoCorpo { Estrela, Planeta, Lua, Asteroide, Cometa, Outro };

class CorpoCeleste {
private:
    std::string nome;
    TipoCorpo tipo;
    double massaKg;
    double raioKm;

public:
    CorpoCeleste();
    CorpoCeleste(const std::string& n, TipoCorpo t, double m, double r);

    std::string getNome();
    void setNome(const std::string& n);

    TipoCorpo getTipo();
    void setTipo(TipoCorpo t);

    double getMassaKg();
    void setMassaKg(double m);

    double getRaioKm();
    void setRaioKm(double r);

    double densidade();         
    double gravidadeSuperficial(); 
    std::string descricao();
};

#endif
