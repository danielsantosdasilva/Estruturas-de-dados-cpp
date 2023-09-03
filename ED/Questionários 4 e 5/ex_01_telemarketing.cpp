#include <iostream>
#include <bits/stdc++.h>

//priority queue da stl retorna máximos, necessário alterar para retornar mínimos

using namespace std;
class TM {
public:
    int id; //indentificação do vendedor
    int tempo; //instante em que ele estará livre de novo
    TM(int iid, int ttempo) : id(iid), tempo(ttempo) {}
    bool operator < (const TM & x) const {
        if (tempo == x.tempo)
            return id > x.id;
        return tempo > x.tempo;

    }
};

int main() {

    int N, L;
    cin >> N >> L;
    priority_queue<TM> pq;
    for (int i = 0; i < N; i++)
        pq.push({i, 0}); // o vendedor i está livre

    vector<int> cont(N);
    for (int j = 0; j < L; j++) {
        int t; //leio o tempo da ligação
        cin >> t;
        TM vendedor = pq.top(); pq.pop();
        cont[vendedor.id]++;
        pq.push({vendedor.id, vendedor.tempo + t});
    }

    for (int i = 0; i <N; i++)
        cout << i+1 << ' ' << cont[i] << endl; 


    return 0;
}