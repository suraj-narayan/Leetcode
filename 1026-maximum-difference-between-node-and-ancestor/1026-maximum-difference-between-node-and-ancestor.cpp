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
    
    
    
    
    int solve(TreeNode* root, int maxx, int minn) {
        if(!root)
            return 0;
        int ans=max(abs(root->val-maxx), abs(root->val-minn));
        maxx=max(root->val, maxx);
        minn=min(root->val, minn);
        int leftt=solve(root->left, maxx, minn);
        int rightt=solve(root->right, maxx, minn);
        return max({ans, leftt, rightt});
    }
    
    
    
    
    
    
    
    
    
    int maxAncestorDiff(TreeNode* root) {
        return solve(root, root->val, root->val);
    }
};