#include <iostream>
using namespace std;
class Pilha
{
private:
    struct No
    {
     
        int valor;
        No *prox;
    };

    int tamanhoMaximo = 5; // Capacidade máxima da pilha
    int tamanhoAtual;  // Tamanho atual da pilha
    No *topo;          // Topo da pilha

public:
    Pilha(int tamanhoMax) : tamanhoMaximo(tamanhoMax), tamanhoAtual(0), topo(nullptr) {}

    ~Pilha()
    {
        while (!estavazia())
        {
            remover();
        }
    }

    bool estacheio() const
    {
        return tamanhoAtual >= tamanhoMaximo;
    }

    bool estavazia() const
    {
        return tamanhoAtual == 0;
    }

    void inserirElemento(int valor)
    {
        if (estacheio())
        {
            std::cout << "Erro: Pilha cheia. Não é possível inserir mais elementos.\n";
            return;
        }

        No *novoNo = new No;
        novoNo->valor = valor;
        novoNo->prox = topo;
        topo = novoNo;
        tamanhoAtual++;
    }

    void remover()
    {
        if (estavazia())
        {
            cout << "A pilha esta vazia!\n";
            cout << "Erro: Pilha vazia. Não é possível remover elementos.\n";
            return;
        }

        No *temp = topo;
        topo = topo->prox;
        delete temp;
        tamanhoAtual--;
    }

    void imprimirPilha() const
    {
        if (estavazia())
        {
            std::cout << "Pilha vazia\n";
            return;
        }

        No *temp = topo;
        std::cout << "Elementos da pilha:\n";
        while (temp != nullptr)
        {
            std::cout << temp->valor << " ";
            temp = temp->prox;
        }
        std::cout << std::endl;
    }
};