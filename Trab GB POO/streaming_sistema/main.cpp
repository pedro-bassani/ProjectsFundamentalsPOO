#include <iostream>
#include "StreamingSystem.h"
using namespace std;
int main(){
    StreamingSystem s; int op;
    while(true){
        cout<<"1-Filme\n2-Serie\n3-Minisserie\n4-Listar\n5-Salvar\n6-Carregar\n7-Remover\n0-Sair\nOp:";
        cin>>op; cin.ignore();
        if(op==1) s.adicionarMidia("FILME");
        else if(op==2) s.adicionarMidia("SERIE");
        else if(op==3) s.adicionarMidia("MINISSERIE");
        else if(op==4) s.listar();
        else if(op==5){ string n; cout<<"Arquivo:"; getline(cin,n); s.salvar(n);}
        else if(op==6){ string n; cout<<"Arquivo:"; getline(cin,n); s.carregar(n);}
        else if(op==7){ int id; cout<<"ID:"; cin>>id; cin.ignore(); s.remover(id);}
        else if(op==0) break;
    }
    return 0;
}
