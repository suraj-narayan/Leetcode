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
    
    int maxx(TreeNode* root)
    {
        if(!root)
            return 0;
        return 1+max(maxx(root->left), maxx(root->right));
    }
    
    int help(TreeNode* root, int i, int h ) { 
    
        if(!root)
            return 0;
        if(i==h)
            return root->val;
        return help(root->left, i+1, h)+help(root->right, i+1,h);
        
        
        
        
        
        
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int h=maxx(root);
        
        return help(root, 1, h);
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};