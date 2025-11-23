#ifndef MIDIA_H
#define MIDIA_H
#include <string>
class Midia {
protected:
    int id; std::string titulo; int ano;
public:
    Midia(int id, const std::string& titulo, int ano);
    virtual ~Midia() {}
    int getId() const { return id; }
    virtual void exibirInformacoes() const = 0;
    virtual std::string toCSV() const = 0;
    static Midia* fromCSV(const std::string& line);
};
#endif
