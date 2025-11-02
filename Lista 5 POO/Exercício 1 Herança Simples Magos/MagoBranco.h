#ifndef MAGOBRANCO_H
#define MAGOBRANCO_H

#include "Mago.h"

class MagoBranco : public Mago {
public:
    MagoBranco(string n, int p);
    void lancarCura();
};

#endif