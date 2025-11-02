#include "Cachorro.h"
#include <iostream>
using namespace std;

Cachorro::Cachorro(string n) : Animal(n) {}

void Cachorro::fazerSom() {
    cout << nome << ": Au au!" << endl;
}