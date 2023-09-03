#include <iostream>

using namespace std;

int main() {

    int totalFigurinhas, figurinhasCompradas, count = 0;
    int figurinhas [figurinhasCompradas]= {};

    //leitura dos dados
    cin >> totalFigurinhas;
    cin >> figurinhasCompradas;

    for(int i = 0; i <= figurinhasCompradas-1; i++) { // leitura das figurinhas
        cin >> figurinhas[i];
    }

    bool flag;

    for(int i = 0; i <= figurinhasCompradas-1; i++) { //compara as figurinhas, adicionando ao contador as figurinhas não repetidas
        flag = false;
        for(int j = 0; j < i; j++) {
            if(figurinhas[i] == figurinhas[j]) {
                flag = true;
                break;
            }
        }
        if(flag == false){
            count += 1;
        }
    }

    cout << totalFigurinhas-count << endl; //Saída com a quantia de figurinhas que faltam para completar o álbum

    return 0;

}