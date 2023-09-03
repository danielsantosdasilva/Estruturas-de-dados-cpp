#include <iostream>
struct node{
    int val;
    node *next;
    node (int x): val(x), next(NULL) {}
};

node *insereNoInicio(node *first, int v){
    node *newNode = new node(v);
    newNode-> next = first;
    first = newNode;
    return first;

}

void removeSeguinteDe(node *p) {
    if(p->next != NULL){
        node *t = p->next;
        p->next = t->next;
        delete t;
    }
}


void printList(node *f) {
    node *p = f;
    while (p != NULL) {
        cout << p->val << "->";
        p = p->next;
    }
    cout << "NULL/n/n";
}

void insereDepoisDe(node *p, node *t) {
    t->next = p->next;
    p->next = t;
}

using namespace std;

int main() {
    //cria lista qualquer
    node *first = NULL;
    first = insereNoInicio(first, 37);
    first = insereNoInicio(first, 45);
    first = insereNoInicio(first, 88);
    node *p = first; // para remover o elemento 45
    first = insereNoInicio(first, 23);
    first = insereNoInicio(first, 90);

    cout << "Lista inicial";
    printList(first);

    node *q = new node(91);
    insereDepoisDe(p, q);

    removeSeguinteDe(p, q);

    printList(first); //print no removido

    return 0;
}