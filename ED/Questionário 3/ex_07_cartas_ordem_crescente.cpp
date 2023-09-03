#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> reordenarCartas(const vector<int>& baralho) {
    queue<int> fila;
    vector<int> resultado;


    for (int carta : baralho) {
        fila.push(carta);
    }

    while (!fila.empty()) {
        int carta_revelada = fila.front();
        fila.pop();
        resultado.push_back(carta_revelada);

        if (!fila.empty()) {
            int carta_movida = fila.front();
            fila.pop();
            fila.push(carta_movida);
        }
    }


    for (int i = 0; i < resultado.size() - 1; i++) {
        for (int j = 0; j < resultado.size() - 1 - i; j++) {
            if (resultado[j] > resultado[j + 1]) {
                int temp = resultado[j];
                resultado[j] = resultado[j + 1];
                resultado[j + 1] = temp;
            }
        }
    }

    return resultado;
}

int main() {
    vector<int> baralho = {17, 13, 11, 2, 3, 5, 7};
    vector<int> resultado = reordenarCartas(baralho);

    for (int carta : resultado) {
        cout << carta << " ";
    }
    cout << endl;

    return 0;
}
