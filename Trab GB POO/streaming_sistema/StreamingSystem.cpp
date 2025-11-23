#include "StreamingSystem.h"
#include "Filme.h"
#include "Serie.h"
#include "Minisserie.h"
#include <iostream>
#include <fstream>

StreamingSystem::StreamingSystem():nextId(1){}
StreamingSystem::~StreamingSystem(){ for(auto m:catalogo) delete m; }

void StreamingSystem::adicionarMidia(const std::string& tipo){
    std::string titulo,diretor; int ano,dur,temp,epi;
    std::cout<<"Título: "; std::getline(std::cin,titulo);

    if(tipo=="FILME"){
        std::cout<<"Ano:"; std::cin>>ano;
        std::cout<<"Duração:"; std::cin>>dur;
        std::cin.ignore();
        std::cout<<"Diretor:"; std::getline(std::cin,diretor);
        catalogo.push_back(new Filme(nextId++,titulo,ano,dur,diretor)); return;
    }
    if(tipo=="SERIE"){
        std::cout<<"Ano:"; std::cin>>ano;
        std::cout<<"Temporadas:"; std::cin>>temp;
        std::cout<<"Episodios:"; std::cin>>epi;
        std::cin.ignore();
        catalogo.push_back(new Serie(nextId++,titulo,ano,temp,epi)); return;
    }
    if(tipo=="MINISSERIE"){
        int d;
        std::cout<<"Ano:"; std::cin>>ano;
        std::cout<<"Temporadas:"; std::cin>>temp;
        std::cout<<"Episodios:"; std::cin>>epi;
        std::cout<<"Duracao total:"; std::cin>>d;
        std::cin.ignore();
        catalogo.push_back(new Minisserie(nextId++,titulo,ano,temp,epi,d)); return;
    }
}

void StreamingSystem::listar() const{
    if(catalogo.empty()){ std::cout<<"Vazio\n"; return; }
    for(auto m:catalogo) m->exibirInformacoes();
}

void StreamingSystem::remover(int id){
    for(size_t i=0;i<catalogo.size();i++){
        if(catalogo[i]->getId()==id){
            delete catalogo[i];
            catalogo.erase(catalogo.begin()+i);
            std::cout<<"Removido\n"; return;
        }
    }
}

void StreamingSystem::salvar(const std::string& nome) const{
    std::ofstream f(nome);
    for(auto m:catalogo) f<<m->toCSV()<<"\n";
}

void StreamingSystem::carregar(const std::string& nome){
    std::ifstream f(nome);
    if(!f.is_open()){ std::cout<<"Erro\n"; return; }

    for(auto m:catalogo) delete m;
    catalogo.clear();

    std::string line; int maxid=0;
    while(std::getline(f,line)){
        Midia* m = Midia::fromCSV(line);
        if(m){
            catalogo.push_back(m);
            if(m->getId()>maxid) maxid=m->getId();
        }
    }
    nextId = maxid+1;
}
