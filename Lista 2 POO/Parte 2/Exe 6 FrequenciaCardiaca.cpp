#include "Exe 6 FrequenciaCardiaca.h"

FrequenciaCardiaca::FrequenciaCardiaca() {
    primeiroNome = "";
    sobrenome = "";
    diaNasc = 1;
    mesNasc = 1;
    anoNasc = 2000;
}

FrequenciaCardiaca::FrequenciaCardiaca(const std::string& p, const std::string& s, int d, int m, int a) {
    primeiroNome = p;
    sobrenome = s;
    setDiaNasc(d);
    setMesNasc(m);
    setAnoNasc(a);
}

std::string FrequenciaCardiaca::getPrimeiroNome() { return primeiroNome; }
void FrequenciaCardiaca::setPrimeiroNome(const std::string& p) { primeiroNome = p; }

std::string FrequenciaCardiaca::getSobrenome() { return sobrenome; }
void FrequenciaCardiaca::setSobrenome(const std::string& s) { sobrenome = s; }

int FrequenciaCardiaca::getDiaNasc() { return diaNasc; }
void FrequenciaCardiaca::setDiaNasc(int d) {
    if (d < 1) d = 1;
    if (d > 31) d = 31; 
    diaNasc = d;
}

int FrequenciaCardiaca::getMesNasc() { return mesNasc; }
void FrequenciaCardiaca::setMesNasc(int m) {
    if (m < 1) m = 1;
    if (m > 12) m = 12;
    mesNasc = m;
}

int FrequenciaCardiaca::getAnoNasc() { return anoNasc; }
void FrequenciaCardiaca::setAnoNasc(int a) {
    if (a < 1901) a = 1901; 
    anoNasc = a;
}

int FrequenciaCardiaca::obterIdade(int diaAtual, int mesAtual, int anoAtual) {
    int idade = anoAtual - anoNasc;
    if (mesAtual < mesNasc) idade--;
    else if (mesAtual == mesNasc && diaAtual < diaNasc) idade--;
    if (idade < 0) idade = 0; 
    return idade;
}

int FrequenciaCardiaca::obterFrequenciaMaxima(int idade) {
    return 220 - idade;
}

void FrequenciaCardiaca::obterFrequenciaIdeal(int idade, int& minAlvo, int& maxAlvo) {
    int max = obterFrequenciaMaxima(idade);
    minAlvo = (max * 50) / 100;
    maxAlvo = (max * 85) / 100;
}
