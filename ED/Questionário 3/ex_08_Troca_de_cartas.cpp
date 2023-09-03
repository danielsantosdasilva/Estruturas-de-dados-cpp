#include <iostream>
#include <vector>
using namespace std; 

void le_enxuga(vector<int>& z, int t) {
    int za = 0;
    for (int i = 0; i < t; i++) {
        int valor;
        cin >> valor;
        if (valor > za) {
            z.push_back(valor);
            za = valor;
        }
    }
}

int merge_cartas(vector<int>& x, vector<int>& y) {
    int i=0, j=0;
    int kA = 0, kB =0;
    while (i < x.size() and j < y.size()) {
        if (x[i] < y[j]) {
            kA++;
            i++;
        }
        if (x[i] > y[j]) {
            kB++;
            j++;
        }
        if (x[i] == y[j]){
            i++;
            j++;
        }

    }
    while (i < x.size()){
        kA++;
        i++;
    }
    while (j< y.size()) {
        kB++;
        j++;
    }

    return min(kA, kB);
}

int main () {
    int a, b;

    while (cin >> a >> b, a != 0) {
        vector<int> x;
        le_enxuga(x, a);
        vector<int> y;
        le_enxuga(y, b);

       int r = merge_cartas(x,y);
       cout << r << endl;

    }

    return 0;
}