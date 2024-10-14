#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    void build_array(TreeNode *root,vector<int> &a){
        if(!root)return;
        build_array(root->left,a);
        a.push_back(root->val);
        build_array(root->right,a);
    }
    TreeNode *build_tree(vector<int> &a,int low,int high){
        if(low>high)return NULL;
        int mid = (low+high)/2;
        TreeNode* root = new TreeNode(a[mid]);
        root->left = build_tree(a,low,mid-1);
        root->right = build_tree(a,mid+1,high);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> a;
        build_array(root,a);
        // sort(a.begin(),a.end());
        return build_tree(a,0,a.size()-1);
    }
};

int main(){
    Solution s;
    // TreeNode *root = new TreeNode(1);
    // root->right = new TreeNode(3);
    // root->right->right = new TreeNode(2);
    // root->right->right->right = new TreeNode(4);
    TreeNode *root = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left = new TreeNode(1);
    // root->right->right->right = new TreeNode(4);
    auto r = s.balanceBST(root);
    print(r);
}