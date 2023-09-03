#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    //leitura de dados
    int tab[n];
    for (int i = 0; i < n; i++ ) {
        cin >> tab[i];
    }

    if (n==1) {
        cout << tab[0] << '\n'; 
        return 0; 
     }

    //imrpime o resultado
    cout << tab[0] + tab[1] << endl; //imprime a primeira posição do vetor
    for (int i = 1; i < n-1; i++) {
        cout << tab[i-1] + tab[i] + tab[i+1] << endl; //imprime as posições no meio do vetor
    }
    cout << tab[n-2] + tab[n-1] << endl; //imrpime a última posição do vetor

    return 0;
}