#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
    map<int,int>m;
    void build_map(TreeNode *root,int level){
        if(root==NULL) return ;
        m[level]+=root->val;
        build_map(root->left,level+1);
        build_map(root->right,level+1);
    }
public:
    
    int maxLevelSum(TreeNode* root) {
        build_map(root,1);
        int ans=1;
        for(auto level:m)
            if(level.second>m[ans])
                ans=level.first;
        return ans;
    }
};

int main(){
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(7);
    root->right = new TreeNode(0);
    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(-8);
    cout << s.maxLevelSum(root) << endl;
}