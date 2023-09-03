/* Guilherme A. Pinto, OBI-2015, Quebracabeca */

#include <iostream>

#define MAXV 200000

using namespace std;

int direita[MAXV + 1];
char letra[MAXV + 1];

int main() {
    int N, E;

    cin >> N;

    while (N > 0) {
        cin >> E;
        cin >> letra[E] >> direita[E];
        N--;
    }

    E = 0;
    while (E != 1) {
        cout << letra[E];
        E = direita[E];
    }

    cout << endl;

    return 0;
}
