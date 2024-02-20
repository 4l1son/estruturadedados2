#include <iostream>
#include "fila.h" // Supondo que você salvou a classe fila em um arquivo chamado fila.h

int main() {
    fila minhaFila;

    // Inserindo elementos na fila
    minhaFila.inserirElementoFila(1);
    // Verificando se a fila está vazia
    if (minhaFila.estaVazia()) {
        std::cout << "A fila está vazia." << std::endl;
    } else {
        std::cout << "A fila não está vazia." << std::endl;
    }


    minhaFila.imprimir();
    // Verificando novamente se a fila está vazia
    if (minhaFila.estaVazia()) {
        std::cout << "A fila está vazia." << std::endl;
    } else {
        std::cout << "A fila não está vazia." << std::endl;
    }

        // Removendo um elemento da fila
    minhaFila.remover();

    minhaFila.imprimir();
   if (minhaFila.estaVazia()) {
        std::cout << "A fila está vazia." << std::endl;
    } else {
        std::cout << "A fila não está vazia." << std::endl;
    }

    return 0;
}
