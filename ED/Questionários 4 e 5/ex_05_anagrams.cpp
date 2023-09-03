#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> grupos;
        for (int i = 0; i < n; i++) { 
            string key = strs[i];
            sort(key.begin(), key.end());
            grupos[key].push_back(strs[i]);
        }
        vector<vector<string>> resp;
        for (auto x : grupos)
            resp.push_back(x.second);
        return resp;
    }
};

int main() {
    vector<string> strs{"eat","tea","tan","ate","nat","bat"};
    Solution obj;
    vector<vector<string>> resp = obj.groupAnagrams(strs);

    int n = resp.size();
    for (int i = 0; i < n; i++) {
        for (string x : resp[i])
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
