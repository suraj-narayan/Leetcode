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
    
    int solve(TreeNode* root, int sum)
    {
        sum=sum*10+root->val;
        if(!root->left and !root->right)
        {
            return sum;
        }
        int ans=0;
        if(root->left)
            ans+=solve(root->left, sum);
        if(root->right)
            ans+=solve(root->right, sum);
        return ans;
    }
    
    
    
    int sumNumbers(TreeNode* root) {
        return solve(root, 0);
    }
};