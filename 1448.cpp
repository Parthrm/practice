#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    void count(TreeNode *root,int max_value_found,int &ans){
        if(root==NULL) return ;
        if(root->val >= max_value_found)
        ans++;
        max_value_found = max(max_value_found,root->val);
        count(root->left,max_value_found,ans);
        count(root->right,max_value_found,ans);
    }
    int goodNodes(TreeNode* root) {
        int ans=0;
        count(root,root->val,ans);
        return ans;
    }
};

int main(){
    Solution s;
    // TreeNode* root = new TreeNode(3);
    // root->left = new TreeNode(1);
    // root->right = new TreeNode(4);
    // root->left->left = new TreeNode(3);
    // root->right->left = new TreeNode(1);
    // root->right->right = new TreeNode(5);

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(3);
    // root->right = new TreeNode(4);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(2);
    // root->right->right = new TreeNode(5);
    cout<<s.goodNodes(root);

}