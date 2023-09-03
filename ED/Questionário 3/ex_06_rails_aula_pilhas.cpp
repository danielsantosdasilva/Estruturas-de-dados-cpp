#include <iostream>
#define NMAX 1000

using namespace std;

int main () {
    int n;
    cin >> n;

    int b[NMAX +1];
    for (int i=0; i < n; i++) {
        cin >> b[i];
        b[i]--;


    }

    //simulando a chegada e saída dos trens 
    int p[NMAX] = {};
    int topo = 0;
    int ia = 0;
    int ib = 0;

    while (ib < n) {
        if (b[ib] == ia) {
            ia++; ib++;
        }
        else if (topo > 0 and b[ib] == p[topo-1]) {
            ib++; topo--;
        }
        else {
            if (ia < n) {
                p[topo++] = ia;
                ia++;
            }
            else 
                break;
        }
    }
    if (topo != 0)
    cout << "No";
    else cout << "Yes";


        
    return 0;
}

// ia = indice de a, ib = indice de b 