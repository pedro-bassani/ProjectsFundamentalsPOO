#include "Midia.h"
#include "Filme.h"
#include "Serie.h"
#include "Minisserie.h"
#include <sstream>
#include <vector>

static std::vector<std::string> splitCSV(const std::string& line){
    std::vector<std::string> t; std::string tok; bool q=false;
    for(size_t i=0;i<line.size();i++){
        char c=line[i];
        if(c=='"') q=!q;
        else if(c==';' && !q){ t.push_back(tok); tok.clear(); }
        else tok.push_back(c);
    }
    t.push_back(tok); return t;
}

Midia::Midia(int id,const std::string& t,int a):id(id),titulo(t),ano(a){}

Midia* Midia::fromCSV(const std::string& line){
    auto t=splitCSV(line); if(t.empty()) return nullptr;
    try{
        if(t[0]=="FILME") return new Filme(stoi(t[1]),t[2],stoi(t[3]),stoi(t[4]),t[5]);
        if(t[0]=="SERIE") return new Serie(stoi(t[1]),t[2],stoi(t[3]),stoi(t[4]),stoi(t[5]));
        if(t[0]=="MINISSERIE") return new Minisserie(stoi(t[1]),t[2],stoi(t[3]),
                                                    stoi(t[4]),stoi(t[5]),stoi(t[6]));
    }catch(...){ return nullptr; }
    return nullptr;
}
