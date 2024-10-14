#include<bits/stdc++.h>
using namespace std;
void print(vector<int>a){
    for(auto i:a){
        cout.width(4);
        cout<<i;
    }
    cout<<endl;
}

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    int sum=0;
public:
    TreeNode* bstToGst(TreeNode* root) {
        if(!root)return NULL;
        bstToGst(root->right);
        root->val=sum=root->val+sum;
        bstToGst(root->left);
        return root;
    }
};

int main(){
    TreeNode *r = new TreeNode(30);
    r->left = new TreeNode(1);
    r->right = new TreeNode(6);
    r->left->left = new TreeNode(0);
    r->left->right = new TreeNode(2);
    r->left->right->right = new TreeNode(3);
    r->right->left = new TreeNode(5);
    r->right->right = new TreeNode(7);
    r->right->right->right = new TreeNode(8);
    Solution s;
    s.bstToGst(r);
}