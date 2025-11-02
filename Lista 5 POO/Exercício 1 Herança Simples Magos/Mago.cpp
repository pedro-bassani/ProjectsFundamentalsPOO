#include "Mago.h"
#include <iostream>
using namespace std;

Mago::Mago(string n, int p) : nome(n), poder(p) {}

void Mago::andar() {
    cout << nome << " está andando..." << endl;
}

void Mago::falar(string msg) {
    cout << nome << " diz: " << msg << endl;
}

void Mago::mostrarInfo() {
    cout << "[Mago] Nome: " << nome << " | Poder: " << poder << endl;
}
