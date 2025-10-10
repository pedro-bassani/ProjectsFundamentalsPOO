#include "Exe1_MagoCSV.h"
#include <fstream>
#include <sstream>
#include <vector>

void MagoCSV::serialize(Mago* magos, int nLinhas, std::string nomeArquivo) {
    std::ofstream arq(nomeArquivo.c_str());
    arq << "Nome,Idade,Escola\n";
    for (int i = 0; i < nLinhas; i++) {
        arq << magos[i].getNome() << "," << magos[i].getIdade() << "," << magos[i].getEscola() << "\n";
    }
}
Mago* MagoCSV::deserialize(std::string nomeArquivo, int nLinhas, int nColunas) {
    std::ifstream arq(nomeArquivo.c_str());
    std::string linha;
    if (!std::getline(arq, linha)) {}
    std::vector<std::string> temp;
    temp.resize(nLinhas * nColunas);
    int r = 0;
    while (r < nLinhas && std::getline(arq, linha)) {
        std::stringstream ss(linha);
        std::string pedaco;
        int c = 0;
        while (c < nColunas && std::getline(ss, pedaco, ',')) {
            temp[r * nColunas + c] = pedaco;
            c++;
        }
        while (c < nColunas) {
            temp[r * nColunas + c] = "";
            c++;
        }
        r++;
    }
    while (r < nLinhas) {
        for (int c = 0; c < nColunas; c++) temp[r * nColunas + c] = "";
        r++;
    }
    Mago* magos = new Mago[nLinhas];
    for (int i = 0; i < nLinhas; i++) {
        std::string n = temp[i * nColunas + 0];
        std::string id = temp[i * nColunas + 1];
        std::string es = temp[i * nColunas + 2];
        int idade = 0;
        if (!id.empty()) {
            try { idade = std::stoi(id); } catch (...) { idade = 0; }
        }
        magos[i].setNome(n);
        magos[i].setIdade(idade);
        magos[i].setEscola(es);
    }
    return magos;
}
