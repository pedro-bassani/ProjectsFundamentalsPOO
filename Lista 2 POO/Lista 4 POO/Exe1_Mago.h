#ifndef EXE1_MAGO_H
#define EXE1_MAGO_H
#include <string>

class Mago {
private:
    std::string nome;
    int idade;
    std::string escola;
public:
    Mago();
    Mago(const std::string& n, int i, const std::string& e);
    void setNome(const std::string& n);
    void setIdade(int i);
    void setEscola(const std::string& e);
    std::string getNome() const;
    int getIdade() const;
    std::string getEscola() const;
};
#endif
