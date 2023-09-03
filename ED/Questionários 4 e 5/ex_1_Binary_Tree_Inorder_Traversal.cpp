#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
    int key;
    TreeNode *left, *right;
    TreeNode(int x): key(x), left(NULL), right(NULL){};
};

class Solution{
    vector<int>ans;
    public:
        vector<int> inorderTransversal(TreeNode *root){
            if(root != NULL)
                inorderTransversalR(root);
            return ans;
      }
    void inorderTransversalR(TreeNode* p) {
        if (p==NULL) return;
        inorderTransversalR(p->left);
        ans.push_back(p->key);
        inorderTransversalR(p->right);
    }
};

TreeNode* insert(TreeNode * p, int key){
    if (p== NULL){
        TreeNode* newNode = new TreeNode(key);
        p = newNode;
        return p;
    }
    if(key < p->key)
        p->left = insert(p->left, key);
    if(key > p->key)
        p->right = insert(p->right,key);
    return p;
}

//CLIENTE DE TESTE
int main()
{   
    TreeNode *root = NULL; //criar a arvore
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 7);
    root = insert(root, 6);
    root = insert(root, 4);
    
    Solution obj;
    vector<int> resp = obj.inorderTransversal(root);
    for(auto x: resp)
        cout << x << ' ';
    cout << '\n';
    return 0;
}