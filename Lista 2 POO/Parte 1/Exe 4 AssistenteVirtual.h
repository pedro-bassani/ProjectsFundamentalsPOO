#ifndef ASSISTENTE_VIRTUAL_H
#define ASSISTENTE_VIRTUAL_H

#include <string>

class AssistenteVirtual {
private:
    std::string nome;
    std::string idioma;
    std::string versao;
    int volume;           
    bool microfoneAtivo;

public:
    AssistenteVirtual();
    AssistenteVirtual(const std::string& n, const std::string& i, const std::string& v);

    void dizerOla();
    void executarComando(const std::string& comando);
    void definirIdioma(const std::string& i);
    void atualizarVersao(const std::string& v);

    void setVolume(int v);
    int getVolume();

    void setMicrofoneAtivo(bool ativo);
    bool getMicrofoneAtivo();

    void registrarLembrete(const std::string& texto, const std::string& quando);
    std::string resumoStatus();
};

#endif
