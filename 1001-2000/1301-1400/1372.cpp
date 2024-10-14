#include <bits/stdc++.h>
#include "print.h"
using namespace std;

class Solution
{
    void dfs(TreeNode *root, int isLeft, int len, int &mx)
    {
        if (!root)
            return;

        mx = max(mx, len);
        if (isLeft)
        {                                     // if I trav left prev
            dfs(root->right, 0, len + 1, mx); // inc len by 1 and trav right
            dfs(root->left, 1, 1, mx);        // go left as len 1
        }
        else
        {                                    // if I trav right prev
            dfs(root->left, 1, len + 1, mx); // inc len by 1 and trav left
            dfs(root->right, 0, 1, mx);      // go right as len 1
        }
    }

public:
    int longestZigZag(TreeNode *root)
    {
        int mx = 0;
        dfs(root->left, 1, 1, mx); // (root, isleft, len, mx)
        dfs(root->right, 0, 1, mx);
        return mx;
    }
};

int main()
{
    Solution s;

    // TreeNode *root=new TreeNode(1);

    // root->left=new TreeNode(1);
    // root->right=new TreeNode(1);

    // root->left->right=new TreeNode(1);

    // root->left->right->left=new TreeNode(1);
    // root->left->right->right=new TreeNode(1);

    // root->left->right->left->right=new TreeNode(1);

    TreeNode *root = new TreeNode(1);

    root->right = new TreeNode(1);

    root->right->left = new TreeNode(1);
    root->right->right = new TreeNode(1);

    root->right->right->left = new TreeNode(1);
    root->right->right->right = new TreeNode(1);

    root->right->right->left->right = new TreeNode(1);

    root->right->right->left->right->right = new TreeNode(1);

    cout << s.longestZigZag(root);
}