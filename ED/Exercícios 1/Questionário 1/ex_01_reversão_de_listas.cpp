#include <iostream>

using namespace std;

struct Node { //Construtor 
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};

Node *insereNoInicio(Node *first, int v) { //Função que insere elementos no início da lista
    Node *newNode = new Node(v);
    newNode->next = first;
    first = newNode;
    return first;
}

Node *reverteLista(Node *listaInicial) { //Função de reversão da lista
   Node *anterior = NULL;
   Node *p = listaInicial;
   while (p != NULL) {
     Node *t = p->next;
     p->next = anterior;
     anterior = p;
     p = t;
   }
   listaInicial = anterior;
   return listaInicial;
}

void liberaMemoria(Node *ListaParaRemover){ //Função para liberação da memória utilizida
  Node *p = ListaParaRemover;
  while(p!=NULL){
    Node *temp = p->next;
    delete p;
    p = temp;
    
  }
}

void printList(Node *f) { //Imprime a lista 
    Node *p = f;
    while (p != NULL) {
        cout << p->val << "->";
        p = p->next;
    }
    cout << "NULL\n\n";
}

int main () {
    Node *first = NULL;
    first = insereNoInicio(first, 0);
    first = insereNoInicio(first, 1);
    first = insereNoInicio(first, 2);
    first = insereNoInicio(first, 3);
    first = insereNoInicio(first, 4);
    first = insereNoInicio(first, 5);
    first = insereNoInicio(first, 6);
    first = insereNoInicio(first, 7);
    first = insereNoInicio(first, 8);
    first = insereNoInicio(first, 9);

    cout << "Lista inicial:\n"; 
    printList(first);
    
    first = reverteLista(first); 
    printList(first); 

    liberaMemoria(first); 
    return 0;
}