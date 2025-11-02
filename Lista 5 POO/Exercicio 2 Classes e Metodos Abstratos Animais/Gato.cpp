#include "Gato.h"
#include <iostream>
using namespace std;

Gato::Gato(string n) : Animal(n) {}

void Gato::fazerSom() {
    cout << nome << ": Miau!" << endl;
}