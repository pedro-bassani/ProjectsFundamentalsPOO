#ifndef FICHA_LEITURA_H
#define FICHA_LEITURA_H

#include <string>

class FichaLeitura {
private:
    std::string titulo;
    std::string autor;
    int anoPublicacao;
    int numPaginas;
    int paginaAtual;
    bool lido;
    double nota0a5;

public:
    FichaLeitura();
    FichaLeitura(const std::string& t, const std::string& a, int ano, int paginas);

    void iniciarLeitura();
    void marcarLido();
    void avancarPaginas(int qtde);
    void avaliar(double nota);

    std::string getTitulo();
    void setTitulo(const std::string& t);

    std::string getAutor();
    void setAutor(const std::string& a);

    int getAnoPublicacao();
    void setAnoPublicacao(int ano);

    int getNumPaginas();
    void setNumPaginas(int n);

    int getPaginaAtual();
    void setPaginaAtual(int p);

    bool getLido();
    void setLido(bool v);

    double getNota0a5();
    void setNota0a5(double n);

    double percentualLido();
    std::string resumo();
};

#endif
