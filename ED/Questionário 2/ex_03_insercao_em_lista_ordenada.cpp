#include <bits/stdc++.h>

struct Node {
    int val;
    Node* next;

    Node(int v) : val(v), next(nullptr) {}
};

Node* insereNoInicio(Node* ini, int v) {
    Node* newNode = new Node(v);
    newNode->next = ini;
    ini = newNode;
    return ini;
}

void printList_rec(Node* ini) {
    if (ini == nullptr) {
        std::cout << "NULL\n\n";
        return;
    }
    std::cout << ini->val << "->";
    printList_rec(ini->next);
}

void libera(Node* ini) {
    Node* p = ini;
    while (p != nullptr) {
        Node* t = p->next;
        delete p;
        p = t;
    }
}

int main() {
    srand(time(0));

    Node* lista = nullptr;

    // Gerando 100 números aleatórios
    for (int i = 0; i < 100; i++) {
        int num = rand() % 1000;
        lista = insereNoInicio(lista, num);
    }

    // Ordenando a lista
    Node* p = lista;
    std::vector<int> values;
    while (p != nullptr) {
        values.push_back(p->val);
        p = p->next;
    }
    std::sort(values.begin(), values.end());

    // Recriando a lista com os valores ordenados
    libera(lista);
    lista = nullptr;
    for (int i = 0; i < values.size(); i++) {
        lista = insereNoInicio(lista, values[i]);
        printList_rec(lista);
    }

    // Inserindo três números adicionais
    int menor = values[0] - 1;
    int maior = values[values.size() - 1] + 1;
    int meio = (menor + maior) / 2;

    // Tratando o caso em que o valor é menor que todos os valores existentes na lista
    if (menor < lista->val) {
        Node* newNode = new Node(menor);
        newNode->next = lista;
        lista = newNode;
        std::cout << "Inserindo " << menor << ":\n";
        printList_rec(lista);
    }

    lista = insereNoInicio(lista, maior);
    std::cout << "Inserindo " << maior << ":\n";
    printList_rec(lista);

    lista = insereNoInicio(lista, meio);
    std::cout << "Inserindo " << meio << ":\n";
    printList_rec(lista);

    libera(lista);

    return 0;
}
