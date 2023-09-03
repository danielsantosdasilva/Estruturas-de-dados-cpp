#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val; //key
    TreeNode *left, *right;
    TreeNode (int x) : val(x), left (NULL), right (NULL) {}
};

class Solution {
    public:
        bool isvalidBST (TreeNode* root) {
            TreeNode* prev = NULL;
            return isvalidBST_R(root, prev);
        }

        bool isvalidBST_R(TreeNode *p, TreeNode *prev) {
            if (p == NULL) return true;
            if  (isvalidBST_R(p-> left, prev) == false) return false;
                return false;
            if (prev != NULL and prev->val >= p->val)
                return false;
            prev = p;
            return isvalidBST_R(p->right, prev);

        }
};

int main () {
    TreeNode* root = new TreeNode(79);
    root->left = new TreeNode(21);
    root->right = new TreeNode(81);
    root->left->left = new TreeNode(15);
    root->left->right = new TreeNode(55);root->left->right->left = new TreeNode(47);
    root->left->right->right = new TreeNode(81);

    Solution obj;
    cout << boolalpha << obj.isvalidBST(root) << endl;

    return 0;
}

//solução da menor diferença da árvore minimum distance between

//compara as distanças entre o prev e o prev_permutation, utilizando um contato conforme o menor for sendo encontrado, vai atualizando