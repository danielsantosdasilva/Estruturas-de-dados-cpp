#include <bits/stdc++.h>

using namespace std;
class Solution{
public: 
    vector<int> topkFrequent(vector<int>& nums, int k) {
        struct D {
            int num, freq;
            D(int n, int f) : num(n), freq(f) {}
            bool operator< (const D &b) const {
                return freq > b.freq;
            }
        };
        //parte 1
        map<int, int> cont;
        for (int x : nums)
            cont[x]++;

        //parte 2
        priority_queue <D> minPQ;
        for (auto x : cont) {
            minPQ.push({x.first, x.second}); //insert ao invés de push
            if (minPQ.size() > k)
                minPQ.pop();
        }

        //parte 3
        vector<int> ans; //answer
        while (!minPQ.empty()) {
            ans.push_back(minPQ.top().num);
            minPQ.pop();

        }
        return ans;
    }

};

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;

    Solution obj;
    vector<int> resp = obj.topkFrequent(nums, k);
    for (int x: resp)
    cout << x << " ";
    cout << endl;

    return 0;
}
