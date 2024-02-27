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
    
    int maxDiameter(TreeNode* root, int& ans) {
        if(!root)
            return 0;
        int leftt = maxDiameter(root->left, ans);
        int rightt = maxDiameter(root->right, ans);
        ans = max(ans, leftt+rightt);
        return max(leftt, rightt)+1;
        
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        maxDiameter(root, ans);
        return ans;
    }
};