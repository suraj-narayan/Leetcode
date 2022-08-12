/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root==p or root==q)
            return root;
        int pv=p->val;
        int qv=q->val;
        int rv=root->val;
        
        
        if(rv>pv and rv<qv)
            return root;
        if(rv>pv and rv>qv)
            return solve(root->left, p, q);
        return solve(root->right, p, q);
        
        
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     
        if(!root)
            return root;
        if(p->val<q->val)
            return solve(root, p, q);
        else
            return solve(root, q, p);
    }
};