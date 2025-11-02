#include "MagoCinza.h"
#include <iostream>
using namespace std;

MagoCinza::MagoCinza(string n, int p) : Mago(n, p) {}

void MagoCinza::lancarFumaca() {
    cout << nome << " lançou uma Fumaça e desapareceu!" << endl;
}