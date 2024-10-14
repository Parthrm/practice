#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void print(TreeNode *r){
    if(!r)return;
    cout<<r->val<<" ";
    print(r->left);
    print(r->right);
}


class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(!root)return NULL;
        root->left = removeLeafNodes(root->left,target);
        root->right = removeLeafNodes(root->right,target);
        if(root->left==NULL and root->right==NULL and root->val==target)
        return NULL;
        return root;
    }
};

int main(){
    TreeNode *r = new TreeNode(1);
    r->left = new TreeNode(3);
    r->left->left = new TreeNode(3);
    r->left->right = new TreeNode(2);
    r->right = new TreeNode(3); 
    // r->right->left = new TreeNode(2); 
    // r->right->right = new TreeNode(4); 
    print(r);
    Solution s;
    s.removeLeafNodes(r,3);
    cout<<endl;
    print(r);
}