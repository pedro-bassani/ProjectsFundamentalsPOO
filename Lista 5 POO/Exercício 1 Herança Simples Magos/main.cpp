#include <iostream>
#include "MagoBranco.h"
#include "MagoVerde.h"
#include "MagoRoxo.h"
#include "MagoCinza.h"
using namespace std;

int main() {
    MagoBranco gandalf("Gandalf", 100);
    MagoVerde radagast("Radagast", 80);
    MagoRoxo violeta("Violeta", 75);
    MagoCinza cinzento("Cinzento", 85);

    gandalf.mostrarInfo();
    gandalf.falar("Bem-vindo!");
    gandalf.lancarCura();

    radagast.andar();
    radagast.falarComAnimais();

    violeta.lancarIlusao();
    cinzento.lancarFumaca();

    return 0;
}
