#include "Serie.h"
#include <iostream>
#include <sstream>
Serie::Serie(int id,const std::string&t,int ano,int temp,int epi)
    :Midia(id,t,ano),temporadas(temp),episodios(epi){}
void Serie::exibirInformacoes() const{
    std::cout<<"[Série] ID:"<<id<<" | "<<titulo<<" ("<<ano<<") | T:"<<temporadas<<" | Ep:"<<episodios<<"\n";
}
std::string Serie::toCSV() const{
    std::ostringstream o; o<<"SERIE;"<<id<<";"<<titulo<<";"<<ano<<";"<<temporadas<<";"<<episodios; return o.str();
}
