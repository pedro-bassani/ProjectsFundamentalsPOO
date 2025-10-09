#ifndef ANAMNESE_H
#define ANAMNESE_H

#include <string>

class Anamnese {
private:
    std::string nome;
    int idade;
    double pesoKg;
    double alturaM;
    std::string alergias;
    std::string doencasPreExistentes;
    std::string medicamentosEmUso;

public:
    Anamnese();

    Anamnese(const std::string& n, int i, double p, double a,
             const std::string& alg, const std::string& doe, const std::string& meds);

    std::string getNome();
    void setNome(const std::string& n);

    int getIdade();
    void setIdade(int i);

    double getPesoKg();
    void setPesoKg(double p);

    double getAlturaM();
    void setAlturaM(double a);

    std::string getAlergias();
    void setAlergias(const std::string& alg);

    std::string getDoencasPreExistentes();
    void setDoencasPreExistentes(const std::string& d);

    std::string getMedicamentosEmUso();
    void setMedicamentosEmUso(const std::string& m);

    double calcularIMC();
    std::string gerarResumo();
};

#endif
