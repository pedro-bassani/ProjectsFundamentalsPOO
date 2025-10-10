#ifndef EXE1_MAGOCSV_H
#define EXE1_MAGOCSV_H
#include <string>
#include "Exe1_Mago.h"

class MagoCSV {
public:
    void serialize(Mago* magos, int nLinhas, std::string nomeArquivo);
    Mago* deserialize(std::string nomeArquivo, int nLinhas, int nColunas);
};
#endif
