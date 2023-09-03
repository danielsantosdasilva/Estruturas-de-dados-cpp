#include <iostream>

using namespace std;


struct Node {
    int val;
    Node *next;
    Node (int x): val(x), next(NULL) {}
};

int main() {

    Node *no1 = new Node(57);
    Node *no2 = new Node(123);
    no1->next = no2;
    cout << no1->val << no1->next; 
    return 0;
}