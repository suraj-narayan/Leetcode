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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return false;
        targetSum-=root->val;
        if(!root->left and !root->right and targetSum==0)
            return true;
        
        bool ans=false;
        if(root->left)
            ans=ans or hasPathSum(root->left, targetSum);
        if(ans==true)
            return ans;
        if(root->right)
            ans= ans or hasPathSum(root->right, targetSum);
        return ans;
    }
};