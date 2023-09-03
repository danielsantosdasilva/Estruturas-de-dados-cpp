#include <iostream>

using namespace std;

struct Node {
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};

Node *insereNoInicio(Node *first, int v) {
    Node *newNode = new Node(v);
    newNode->next = first;
    first = newNode;
    return first;
}

void insereDepoisDe(Node *p, int v) {
    Node *t = new Node(v);
    t->next = p->next;
    p->next = t;
}

void removeSeguinteDe(Node *p) {
    if (p->next != NULL) {
        Node *t = p->next;
        p->next = t->next;
        delete t;
    }
}

void printList(Node *f) {
    Node *p = f;
    while (p != NULL) {
        cout << p->val << "->";
        p = p->next;
    }
    cout << "NULL\n\n";
}

int main () {
    // Cria lista qualquer
    Node *first = NULL;
    first = insereNoInicio(first, 37);
    first = insereNoInicio(first, 45);
    // q sÃ³ nÃ£o pode ir aqui!

    first = insereNoInicio(first, 88);
    Node *p = first;

    first = insereNoInicio(first, 23);
    Node *q = first;

    first = insereNoInicio(first, 90);

    cout << "Lista inicial:\n";
    printList(first);

    removeSeguinteDe(p);
    printList(first);

    insereDepoisDe(q, 91);
    printList(first);



    return 0;
}