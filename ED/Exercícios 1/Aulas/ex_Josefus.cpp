#include <iostream>

using namespace std;

struct node {
    int val;
    node *next;
    node(int x): val(x), next(NULL){}
};

node *criandocircular(int n) {
    node *p = new node(0);
    node *b = p; // guarda o nó inicial
    for (int i = 1; i < n; i++) {
        p->next = new node(i);
        p = p->next;

    }
    p->next = b;
    return p; // o p virou o penúltimo
}

int main () {
    int n=9, m=5;
    //criar uma lista circular
    node *p = criandocircular(n); //p aponta para o último da lista

    // simulando o jogo de Josefus
    while (p->next != p){
        for(int i = 0; i < m-1; i++) {
            p = p->next;
        cout << p->next->val << " ";
        p->next = p->next->next;
        }
    }

return 0;
}