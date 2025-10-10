#include <iostream>
#include <string>
#include "Exe1_Mago.h"
#include "Exe1_MagoCSV.h"

int main() {
    std::string arquivoEntrada = "magos.csv";
    int linhas = 3;
    int colunas = 3;
    MagoCSV util;
    Mago* lista = util.deserialize(arquivoEntrada, linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        std::cout << lista[i].getNome() << " | " << lista[i].getIdade() << " | " << lista[i].getEscola() << "\n";
    }
    std::cout << "Novo mago\n";
    std::string nn;
    std::string ee;
    int ii;
    std::getline(std::cin, nn);
    if (nn.size() == 0) std::getline(std::cin, nn);
    std::cin >> ii;
    std::cin.ignore();
    std::getline(std::cin, ee);
    Mago* novoArr = new Mago[linhas + 1];
    for (int i = 0; i < linhas; i++) novoArr[i] = lista[i];
    novoArr[linhas] = Mago(nn, ii, ee);
    delete[] lista;
    linhas = linhas + 1;
    util.serialize(novoArr, linhas, "saida.csv");
    for (int i = 0; i < linhas; i++) {
        std::cout << novoArr[i].getNome() << " | " << novoArr[i].getIdade() << " | " << novoArr[i].getEscola() << "\n";
    }
    delete[] novoArr;
    return 0;
}
