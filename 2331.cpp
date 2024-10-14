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
public:
    bool evaluateTree(TreeNode* root) {
        if(!root)return false;
        switch (root->val)
        {
        case 0: return false;
            break;
        case 1: return true;
            break;
        case 2: return (evaluateTree(root->left) || evaluateTree(root->right));
            break;
        case 3: return (evaluateTree(root->left) && evaluateTree(root->right));
            break;
        }
    }
};

int main(){
    Solution s;
    TreeNode *r = new TreeNode(2);
    r->left = new TreeNode(1);
    r->right = new TreeNode(3);
    r->right->left = new TreeNode(0);
    r->right->right = new TreeNode(1);

    cout<<s.evaluateTree(r);
}