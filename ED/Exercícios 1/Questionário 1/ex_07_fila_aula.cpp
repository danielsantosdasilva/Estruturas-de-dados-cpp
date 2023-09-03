#include <iostream>
using namespace std;

int main() {    
    
    //Lê a fila
    int n;
    cin >> n;
    
    int *f = new int[n]; //ponteiro para memória(usado quando temos muitas posições)
    
    for (int i=0; i <n;i++)
        cin >> f[i];
    
    //Lê os que deixaram a fila
    
    int m;
    cin >> m;
    int *d = new int[m];
    for (int j=0; j<n; j++)
        cin >> d[j];
    
    // Imprime a fila dos que ficaram
    
    for (int i=0; i < n; i++){
        
        bool p = True; //a principio, f[i] pode ser impresso
        for(int j=0; j < m; j++)
            if (f[i] == d[j])
                p = False
    
        if (p)
            cout << f[i] << ' ';
        
    }
    cout << '\n';
        
    
    delete[] d;
    delete[] f;
    return 0;
}