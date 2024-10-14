#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
    map<int,int>m;
    void build_map(TreeNode *root,int level){
        if(root==NULL) return ;
        m[level]=root->val;
        build_map(root->left,level+1);
        build_map(root->right,level+1);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        build_map(root,1);
        vector<int>ans;
        for(auto level:m)
            ans.push_back(level.second);
        return ans;
    }
};

int main(){
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    // root->right->right = new TreeNode(4);
    print(s.rightSideView(root));
}