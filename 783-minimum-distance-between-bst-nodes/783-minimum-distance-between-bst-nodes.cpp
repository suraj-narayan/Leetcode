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
    
    
    void solve(TreeNode* root, vector<int> &ans) {
        if(!root)
            return;
        ans.push_back(root->val);
        solve(root->left, ans);
        solve(root->right, ans);
    }
    
    int minDiffInBST(TreeNode* root) {
        vector<int> ans;
        if(!root)
            return -1;
        
    solve(root, ans);
        sort(ans.begin(), ans.end());
        int n=ans.size();
        
        int a=INT_MAX;
        for(int i=1;i<n;i++)
            a=min(a, ans[i]-ans[i-1]);
        return a;
        
        
        
        
    }
};