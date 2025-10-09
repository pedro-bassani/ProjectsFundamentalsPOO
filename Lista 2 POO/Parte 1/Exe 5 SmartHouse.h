#ifndef SMART_HOUSE_H
#define SMART_HOUSE_H

#include <string>

class SmartHouse {
private:
    bool luzesLigadas;
    double temperaturaDesejada;
    bool alarmeAtivo;
    bool portaTrancada;
    std::string modo; 

public:
    SmartHouse();

    void ligarLuzes();
    void desligarLuzes();

    void setTemperatura(double t);
    double getTemperatura();

    void ativarAlarme();
    void desativarAlarme();

    void trancarPorta();
    void destrancarPorta();

    void setModo(const std::string& m);
    std::string getModo();

    std::string status();
    void aplicarCena(const std::string& cena);
};

#endif
