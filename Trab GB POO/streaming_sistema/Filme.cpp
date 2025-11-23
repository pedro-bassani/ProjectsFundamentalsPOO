#include "Filme.h"
#include <iostream>
#include <sstream>
Filme::Filme(int id,const std::string&t,int ano,int d)
    :Midia(id,t,ano),duracao(d),diretor("Desconhecido"){}
Filme::Filme(int id,const std::string&t,int ano,int d,const std::string&dir)
    :Midia(id,t,ano),duracao(d),diretor(dir){}
void Filme::exibirInformacoes() const{
    std::cout<<"[Filme] ID:"<<id<<" | "<<titulo<<" ("<<ano<<") | "<<duracao<<" min | Diretor:"<<diretor<<"\n";
}
std::string Filme::toCSV() const{
    std::ostringstream o; o<<"FILME;"<<id<<";"<<titulo<<";"<<ano<<";"<<duracao<<";"<<diretor; return o.str();
}
