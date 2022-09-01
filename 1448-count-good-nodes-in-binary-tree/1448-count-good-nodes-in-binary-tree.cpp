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
    
    int solve(TreeNode* root, int x)
    {
        if(!root)
            return 0;
        if(root->val<x)
            return  solve(root->left, max(root->val, x))+solve(root->right, max(root->val, x));
        
        
        return 1+solve(root->left, max(root->val, x))+solve(root->right, max(root->val, x));
        
        
    }
    
    
    
    int goodNodes(TreeNode* root) {
        return solve(root, -10000001);
    }
};