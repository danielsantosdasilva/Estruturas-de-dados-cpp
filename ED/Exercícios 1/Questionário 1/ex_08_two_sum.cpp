#include <iostream>
#include <vector>

using namespace std;

vector<int> twosum(vector<int>& nums, int target) { //Cria um vetor, sendo nums a referência para os números e target o resultado esperado
    int n = nums.size();
    vector<int> resp;
    for (int i= 0; i < n; i++) {
        for (int j=i +1; j < n; j++) {
            if (nums[i] + nums[j] == target) { //percorre os elementos, comparando um elemento por vez com os demais
                resp.push_back(i);
                resp.push_back(j);
                return resp;

            }
        }
    }
    return resp;
}

int main() {
    vector<int> nums = {2,7,11,15}; //inicia o vetor com os números
    int target = 9;
}