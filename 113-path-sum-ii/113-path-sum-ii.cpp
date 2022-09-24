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
    
    void solve(TreeNode* root, int sum, vector<vector<int>>& ans, vector<int> temp) {
        
        if(!root) {
            return;
        }
        
            sum-=root->val;
            temp.push_back(root->val);
        if(!root->left and !root->right) {
            if(sum==0)
            ans.push_back(temp);
            return;
        }
        
        solve(root->left, sum, ans, temp);
        solve(root->right, sum, ans, temp);
        
        
        
        
        
        
    }
    
    
   
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        solve(root, targetSum, ans, temp);
        
        return ans;
    }
};