#include <iostream>
#include <stack>

using namespace std;

class OrdenaPilha {
private:
    stack<int> pilha;
    stack<int> pilhaTemporaria;

public:
    void push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

void OrdenaPilha::push(int x) {
    while (!pilha.empty() && pilha.top() < x) {
        pilhaTemporaria.push(pilha.top());
        pilha.pop();
    }
    pilha.push(x);
    while (!pilhaTemporaria.empty()) {
        pilha.push(pilhaTemporaria.top());
        pilhaTemporaria.pop();
    }
}

int OrdenaPilha::pop() {
    int topElement = pilha.top();
    pilha.pop();
    return topElement;
}

int OrdenaPilha::peek() {
    return pilha.top();
}

bool OrdenaPilha::isEmpty() {
    return pilha.empty();
}

int main() {
    OrdenaPilha pilha;
    pilha.push(5);
    pilha.push(2);
    pilha.push(8);
    pilha.push(1);

    while (!pilha.isEmpty()) {
        cout << pilha.pop() << " ";
    }
    cout << endl;

    return 0;
}
