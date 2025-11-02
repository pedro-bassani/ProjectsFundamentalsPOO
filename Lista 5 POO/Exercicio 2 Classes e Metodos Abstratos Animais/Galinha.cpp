#include "Galinha.h"
#include <iostream>
using namespace std;

Galinha::Galinha(string n) : Animal(n) {}

void Galinha::fazerSom() {
    cout << nome << ": Cocoricó!" << endl;
}