#include <iostream>
#include "pilha.h"

int main() {
    Pilha p(5); 

    p.inserirElemento(1);
    p.inserirElemento(2);
    p.inserirElemento(3);

    p.inserirElemento(4);
    p.inserirElemento(5);
    p.inserirElemento(6);

    // Imprimindo a pilha
    p.imprimirPilha();

    // Removendo um elemento da pilha
    p.remover();

    p.remover();

    p.remover();

    // Imprimindo a pilha novamente
    p.imprimirPilha();

    p.remover();
    p.remover();

    // Imprimindo a pilha novamente
    p.imprimirPilha();

    return 0;
}
