#include <bits/stdc++.h>

class Solution {
private:
    const int L = 10;
    unordered_map<char, int> nucleotideos = {{'A', 0}, {'C', 1}, {'G', 2}, {'T', 3}};

public:
    vector<string> encontrarSequenciasDnaRepetidas(string s) {
        vector<string> ans;
        if (s.length() <= L)
            return ans;
        
        unsigned long long sequencia = 0;
        unsigned long long mascara = (1ULL << (2 * L)) - 1;
        
        for (int i = 0; i < L - 1; i++) {
            sequencia = (sequencia << 2) | nucleotideos[s[i]];
        }
        
        unordered_map<unsigned long long, int> sequencias;
        sequencias.reserve(s.length() - L + 1);
        
        for (int i = L - 1; i < s.length(); i++) {
            sequencia = (sequencia << 2 | nucleotideos[s[i]]) & mascara;
            if (sequencias[sequencia]++ == 1) {
                ans.push_back(s.substr(i - L + 1, L));
            }
        }
        
        return ans;
    }
};
 

