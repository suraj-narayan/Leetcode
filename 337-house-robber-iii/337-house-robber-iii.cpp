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
    
    
    unordered_map<TreeNode*, int> ump;
    
    int rob(TreeNode* root) {
        if(!root)
            return 0;
        
        if(ump.find(root)!=ump.end())
            return ump[root];
        
        int ans=root->val;
        int ans2=0;
        if(root->left)
        {
            ans2+=rob(root->left);
            ans+=rob(root->left->left);
            ans+=rob(root->left->right);
            
        }
        if(root->right)
        {
            ans2+=rob(root->right);
            ans+=rob(root->right->left);
            ans+=rob(root->right->right);
        }
        
        return ump[root]=max(ans, ans2);
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};