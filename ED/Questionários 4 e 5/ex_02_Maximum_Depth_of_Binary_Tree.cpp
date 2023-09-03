#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
struct TreeNode {
    int val; //key
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) 
            return 0;
        int lDepth = maxDepth(root->left);
        int rDepth = maxDepth(root-> right);
        return max(lDepth, rDepth) +1;
    }
};

TreeNode* insert (TreeNode* root. int key) { //anotações de aula tem a aimplementação


};

int main() {
//estudar mais recursão
    TreeNode* root = NULL //final é parecido com o final de binary inorder...
    return 0;
}