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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
        return {};
        vector<vector<int>> ans;
        queue<TreeNode*>q;
        q.push(root);
        int curr_level=1,next_level=0;
        vector<int>level;
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            level.push_back(node->val);
            curr_level--;

            if(node->right!=NULL){
                q.push(node->right);
                next_level++;
            }
            if(node->left!=NULL){
                q.push(node->left);
                next_level++;
            }

            if(curr_level==0)
            {
                ans.push_back(level);
                level.clear();
                curr_level= next_level;
                next_level=0;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    TreeNode *r = new TreeNode(3,new TreeNode(9),new TreeNode(20,new TreeNode(15),new TreeNode(7)));
    // TreeNode *r = NULL;
    auto ans = s.levelOrder(r);
    for(auto i:ans)print(i);
    ans[1].swap(1,2);
}