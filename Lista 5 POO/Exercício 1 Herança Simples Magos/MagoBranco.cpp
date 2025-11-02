#include "MagoBranco.h"
#include <iostream>
using namespace std;

MagoBranco::MagoBranco(string n, int p) : Mago(n, p) {}

void MagoBranco::lancarCura() {
    cout << nome << " lançou Cura!" << endl;
}