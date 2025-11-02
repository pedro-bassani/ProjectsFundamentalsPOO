#include "MagoRoxo.h"
#include <iostream>
using namespace std;

MagoRoxo::MagoRoxo(string n, int p) : Mago(n, p) {}

void MagoRoxo::lancarIlusao() {
    cout << nome << " lançou uma Ilusão!" << endl;
}