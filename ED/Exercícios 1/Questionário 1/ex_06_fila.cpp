#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n; //Lê o tamanho da fila
  int fila[n];
  for (int i = 0; i < n; i++) {
    cin >> fila[i]; //Lê os indices da fila
  }
  cin >> m; //Lê o tamanho das remoções
  int remove[m];
  for (int i = 0; i < m; i++) {
    cin >> remove[i]; //Lê os indices das remoções
  }
  sort(remove, remove + m); //Ordena o array remove

  int i = 0, j = 0;
  while (i < n) { //Loop que irá percorrer a fila (i) e remove(j)
    if (j < m && i == remove[j] - j) { //Verifica se o elemento da fila está presente em remove, caso esteja, não será "copiado"
      j++; 
    } else { // Se o elemento não estiver presente, será "copiado"
      fila[i - j] = fila[i];
    }
    i++;
  }
  n -= j; //Atualiza o tamanho do array fila 

  for (int i = 0; i < n; i++) { //Imprime os elementos resultantes do array fila após as remoções
    cout << fila[i] << " ";
  }
  cout << endl;

  return 0;
}
