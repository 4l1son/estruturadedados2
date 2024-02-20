#include <iostream>

using namespace std;

class fila {
private:
    struct no {
        int valor;
        no *prox;
    };
    no *topo;
    no *frente;
    no *tras;

public:
    fila():topo(nullptr),frente(nullptr),tras(nullptr){};

    void imprimirElemento(){
        no *elemento = frente;
        while (elemento != nullptr) {
            cout << elemento->valor;
            elemento = elemento->prox;
        }
    }

    void inserirElemento(int valor){
        no *elemento = new no;
        elemento->valor = valor;
        elemento->prox = nullptr;
        if (frente == nullptr) {
            frente = tras = elemento;
        } else {
            tras->prox = elemento;
            tras = elemento;
        }
    }

    void reposicionarElemento(){
        no *atual = tras;
        no *anterior = nullptr;

        while (atual != nullptr) {
            // Trocar os valores dos elementos adjacentes
            int temp = atual->valor;
            atual->valor = anterior->valor;
            anterior->valor = temp;

            // Avançar os ponteiros
            anterior = atual;
            atual = atual->prox;
        }
    }

    void removerElemento(){
        if (frente == nullptr) {
            cout << "Fila vazia!" << endl;
            return;
        }

        no *elemento = frente;
        frente = frente->prox;

        if (frente == nullptr) {
            tras = nullptr;
        }

        delete elemento;
    }
};

int main(){
    fila f;

    f.inserirElemento(1);
    f.inserirElemento(2);
    f.inserirElemento(3);

    f.imprimirElemento();
    cout << endl;

    f.reposicionarElemento();
    f.imprimirElemento();
    cout << endl;

    f.removerElemento();
    f.imprimirElemento();

    return 0;
}
