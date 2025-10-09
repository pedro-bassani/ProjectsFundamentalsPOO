#ifndef FREQUENCIA_CARDIACA_H
#define FREQUENCIA_CARDIACA_H

#include <string>

class FrequenciaCardiaca {
private:
    std::string primeiroNome;
    std::string sobrenome;
    int diaNasc;
    int mesNasc;
    int anoNasc;

public:
    FrequenciaCardiaca();
    FrequenciaCardiaca(const std::string& p, const std::string& s, int d, int m, int a);

    std::string getPrimeiroNome();
    void setPrimeiroNome(const std::string& p);

    std::string getSobrenome();
    void setSobrenome(const std::string& s);

    int getDiaNasc();
    void setDiaNasc(int d);

    int getMesNasc();
    void setMesNasc(int m);

    int getAnoNasc();
    void setAnoNasc(int a);

    int obterIdade(int diaAtual, int mesAtual, int anoAtual);
    int obterFrequenciaMaxima(int idade);             
    void obterFrequenciaIdeal(int idade, int& minAlvo, int& maxAlvo); 
};

#endif
