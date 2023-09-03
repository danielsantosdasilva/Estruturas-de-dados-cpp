#include <iostream>
using namespace std;

int main() {
    int tamanho, menor, posicao;
    int competidores, voltas, tempo, soma = 0;
    
    cin >> competidores >> voltas; //lê os dados do total de competidores e de voltas
    
    tamanho = competidores;
    int totais[tamanho];

    for (int i = 0; i < competidores; i++) { // Lê e soma os tempos de cada competidor, adicionando em um array de totais
        for (int j = 0; j < voltas; j++) {
            cin >> tempo;
            soma += tempo;
        }
        totais[i] = soma; //Adiciona o total do participante no array de totais
        soma = 0;
    }

    menor = totais[0]; //Estabelece o menor tempo como o primeiro da lista
    posicao = 0;
    for (int i = 1; i < competidores; i++) { //Loop para comparar os menores tempos do array
        if (totais[i] < menor) {
            menor = totais[i]; //atualiza o menor tempo
            posicao = i; //atualiza a posição do menor tempo na lista
        }
    }

    cout << posicao+1 << endl; //imprime a posição do menor tempo
    return 0;
}
