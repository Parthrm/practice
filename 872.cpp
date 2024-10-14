#include<bits/stdc++.h>
using namespace std;
void print(vector<int>a){
    for(auto i:a){
        cout.width(4);
        cout<<i;
    }
    cout<<endl;
}

//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void leaf_seq(TreeNode*r,vector<int>&seq){
        if(!r)return;
        if(!r->left && !r->right)
        {
            seq.push_back(r->val);
            return;
        }
        leaf_seq(r->left,seq);
        leaf_seq(r->right,seq);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>s1,s2;
        leaf_seq(root1,s1);
        leaf_seq(root2,s2);
        return s1==s2;
    }
};



int main(){
    Solution s;
    TreeNode *r1,*r2;
    // r1 = new TreeNode(1);
    // r1->left=new TreeNode(2);
    // r1->right=new TreeNode(3);
    
    // r2 = new TreeNode(1);
    // r2->left = new TreeNode(3);
    // r2->right = new TreeNode(2);
    
    r1 = new TreeNode(3);
    r1->left=new TreeNode(5);
    r1->right=new TreeNode(1);
    r1->left->left=new TreeNode(6);
    r1->left->right=new TreeNode(2);
    r1->left->right->left=new TreeNode(7);
    r1->left->right->right=new TreeNode(4);
    r1->right->left = new TreeNode(9);
    r1->right->right = new TreeNode(8);
    
    r2 = new TreeNode(3);
    r2->left = new TreeNode(5);
    r2->right = new TreeNode(1);
    r2->left->left = new TreeNode(6);
    r2->left->right = new TreeNode(7);
    r2->right->left=new TreeNode(4);
    r2->right->right=new TreeNode(2);
    r2->right->right->left=new TreeNode(9);
    r2->right->right->right=new TreeNode(8);

    cout<<s.leafSimilar(r1,r2);
}