#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int key;
    TreeNode *left, *right;
    TreeNode(int x) : key (x), left(NULL), right(NULL) {}
    
};

class Solution {
    vector<int>ans;
public:
    vector<int> inorderTraversal(TreeNode *root) {
        if (root != NULL)
            inorderTraversal(root);
        return ans;
    }
    void inOrderTraversalR(TreeNode *p) {
        if (p == NULL) return;
        inOrderTraversalR (p->left);
        ans.push_back(p->key);
        inOrderTraversalR (p->right);

    }
};

TreeNode* insert(TreeNode* p, int key) {
    if (p== NULL) {
        TreeNode* newNode = new TreeNode(key);
        p = newNode;
        return p;
    }
    if (key < p->key)
        p->left = insert(p->left, key);
    if (key > p->key)
        p->right = insert (p->right, key);
    return p;
}

//cliente de teste:
int main() {
    TreeNode *root = NULL;
    root = insert (root, 10);
    root = insert (root, 5);
    root = insert (root, 17);
    root = insert (root, 15);
    root = insert (root, 8);

    Solution obj;
    vector<int> resp = obj.inOrderTraversal(root);
    for (auto x : resp)
        cout << x << " ";
        cout << endl;
        
    return 0;
}

