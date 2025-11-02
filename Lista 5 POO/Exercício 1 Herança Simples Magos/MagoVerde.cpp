#include "MagoVerde.h"
#include <iostream>
using namespace std;

MagoVerde::MagoVerde(string n, int p) : Mago(n, p) {}

void MagoVerde::falarComAnimais() {
    cout << nome << " está falando com os animais!" << endl;
}