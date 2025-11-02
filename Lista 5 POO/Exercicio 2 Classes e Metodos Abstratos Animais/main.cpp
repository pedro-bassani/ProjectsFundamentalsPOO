#include <iostream>
#include "Gato.h"
#include "Cachorro.h"
#include "Galinha.h"
using namespace std;

int main() {

    Gato g("Felix");
    Cachorro c("Rex");
    Galinha h("Carijó");

    c.fazerSom();  
    h.fazerSom();   

    return 0;
}