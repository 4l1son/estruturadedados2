#include<iostream>
using namespace std;
class fila
{
private:
    struct no
    {
        int valor;
        int *prox;
    };
    no *frente;
    no *tras;
    no *topo;
    
public:
    fila():frente(nullptr),tras(nullptr),topo(nullptr){};
    void inserirElemento(int valor){
        no *elemento = new no;
        elemento->valor = valor;
        elemento->prox = nullptr
        frente = elemento->prox
        
   }
    void imprimirElemento(){
        no* elemento = temp;
        while (temp != nullptr)
        {
            cout << elemento->valor;
            temp = elemento->prox;
        }
              
    }
};


int main(){
    cout << "TESTANDO A FILA";

    fila minhafila;
    minhafila.inserirElemento(1);

    minhafila.inserirElemento(2);

    minhafila.inserirElemento(3);

    minhafila.imprimirElemento();

}