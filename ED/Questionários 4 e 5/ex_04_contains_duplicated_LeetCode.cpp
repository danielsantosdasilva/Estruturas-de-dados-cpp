#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> cont;
        for (int x: nums) {
            cont[x]++; //contador das repetições
            if (cont[x] > 1) //percorre o vetor somando e verifica os que são repetidos
                return true;


        }
        return false;

    }
};

int main () {
    vector<int> nums{1,2,3,1};
    Solution obj;
    cout << boolalpha << obj.containsDuplicate(nums) << endl;

    return 00;
}