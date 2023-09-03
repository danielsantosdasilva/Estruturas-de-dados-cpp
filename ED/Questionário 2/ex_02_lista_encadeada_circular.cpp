#include <iostream>

using namespace std;

struct No {
    int valor;
    No* proximo;
};

// Função para inserir um elemento no início da lista
No* insereNoInicio(No* inicio, int valor) {
    No* novoNo = new No;
    novoNo->valor = valor;
    
    if (inicio == nullptr) {
        novoNo->proximo = novoNo;
    } else {
        novoNo->proximo = inicio;
        No* atual = inicio;
        while (atual->proximo != inicio) {
            atual = atual->proximo;
        }
        atual->proximo = novoNo;
    }
    
    return novoNo;
}

// Função para imprimir a lista circular a partir de um determinado ponto
void imprimeCircular(No* inicio) {
    if (inicio == nullptr) {
        cout << "Lista vazia!" << endl;
        return;
    }
    
    No* atual = inicio;
    do {
        cout << atual->valor << " ";
        atual = atual->proximo;
    } while (atual != inicio);
    
    cout << endl;
}

int main() {
    No* inicio = nullptr;
    No* fim = nullptr;
    
    // Criando manualmente a lista circular com 10 itens
    inicio = insereNoInicio(inicio, 1);
    fim = inicio;
    inicio = insereNoInicio(inicio, 2);
    inicio = insereNoInicio(inicio, 3);
    inicio = insereNoInicio(inicio, 4);
    inicio = insereNoInicio(inicio, 5);
    inicio = insereNoInicio(inicio, 6);
    inicio = insereNoInicio(inicio, 7);
    inicio = insereNoInicio(inicio, 8);
    inicio = insereNoInicio(inicio, 9);
    inicio = insereNoInicio(inicio, 10);
    
    cout << "Lista circular a partir do início escolhido anteriormente: " << endl;
    imprimeCircular(inicio);
    
    No* novoInicio = inicio->proximo;

    cout << "Lista circular a partir do novo início: " << endl;
    imprimeCircular(novoInicio);
    
    return 0;
}
