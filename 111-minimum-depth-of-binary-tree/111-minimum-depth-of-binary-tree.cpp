/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        int a=0, b=0;
       if(root->left)
           a=minDepth(root->left);
        if(root->right)
        
             b=minDepth(root->right);
        if(a==0 and b==0)
            return 1;
        if(a==0)
            return b+1;
        if(b==0)
            return a+1;
        return min(a, b)+1;
        
    }
};