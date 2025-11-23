#include "Minisserie.h"
#include <iostream>
#include <sstream>
Minisserie::Minisserie(int id,const std::string&t,int ano,int temp,int epi,int d)
    :Serie(id,t,ano,temp,epi),duracaoTotal(d){}
void Minisserie::exibirInformacoes() const{
    std::cout<<"[Minissérie] ID:"<<id<<" | "<<titulo<<" ("<<ano<<") | T:"<<temporadas<<" | Ep:"<<episodios<<" | Dur:"<<duracaoTotal<<" min\n";
}
std::string Minisserie::toCSV() const{
    std::ostringstream o; o<<"MINISSERIE;"<<id<<";"<<titulo<<";"<<ano<<";"<<temporadas<<";"<<episodios<<";"<<duracaoTotal; return o.str();
}
