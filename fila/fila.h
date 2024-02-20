#include <iostream>
using namespace std;
class fila {
private:
    typedef struct no {
        int valor;
        no* prox;
    };

    no* frente; 
    no* tras;   
    no *topo;   
public:
    fila() : frente(nullptr), tras(nullptr),topo(nullptr) {}

    bool estaVazia() {
        return frente == nullptr;
    }

    void inserirElementoFila(int valor) {
        no* elemento = new no;
        elemento->valor = valor;
        elemento->prox = nullptr;

        if (estaVazia()) {
            frente = elemento;
            tras = elemento;
        } else {
            tras->prox = elemento;
            tras = elemento;
        }
    }


    void remover()
    {
        if (estaVazia())
        {
            cout << "A fila esta vazia!\n";
            cout << "Erro: Fila vazia. Não é possível remover elementos.\n";
            return;
        }
        no* temp = frente; 
        frente = frente->prox; 
        delete temp;

        if (frente == nullptr) {
            tras = nullptr; 
        }
    
    }

    void imprimir(){
        no *temp = frente;
        std::cout << "Elementos da pilha:\n";
        while (temp != nullptr)
        {
            std::cout << temp->valor << " ";
            temp = temp->prox;
        }
        std::cout << std::endl;
    }


};
