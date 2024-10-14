#include<bits/stdc++.h>
using namespace std;
void print(vector<int>a){
    for(auto i:a){
        cout.width(4);
        cout<<i;
    }
    cout<<endl;
}


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void tree_print(TreeNode *r){
    if(r==NULL) return;
    cout<<r->val<<" ";
    tree_print(r->left);
    tree_print(r->right);    
}

class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>preorder) {
        if(preorder.size()==0)return NULL;
        TreeNode *root=new TreeNode(preorder[0]);
        int i;
        for(i=1;i<preorder.size()&&preorder[i]<preorder[0];i++);
        root->left=bstFromPreorder(vector<int>(preorder.begin()+1,preorder.begin()+i));
        root->right=bstFromPreorder(vector<int>(preorder.begin()+i,preorder.end()));
        return root;
    }
};

int main(){
    Solution s;
    vector<int> a = {4,2};
    auto ans = s.bstFromPreorder(a);
    tree_print(ans);
}