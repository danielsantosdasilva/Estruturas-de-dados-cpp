#include <bits/stdc++.h> 
//macete para garantir todos os oncludes

using namespace std;

class solution{
    public:
        int timeRequeredToBuy(vector<int>& tickets, int k) {
            int ans = 0;
            for (int i=0; i < tickets.size(); i++){
                if (i <= k)
                ans += min(tickets[i], tickets[k]);
                else
                    ans += min(tickets[i], tickets[k] - 1);

            }
            return ans;
        }
};

int main() {
    vector<int> nums = {4,2,3,4,3};
    solution obj;
    cout << obj.timeRequeredToBuy(nums, 2);
    
    return 0;
}