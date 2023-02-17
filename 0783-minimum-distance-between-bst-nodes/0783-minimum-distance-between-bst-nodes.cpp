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
    
    void dfs(TreeNode* root, vector<int>& arr) {
        if(!root)
            return;
        arr.push_back(root->val);
        dfs(root->left, arr);
        dfs(root->right, arr);
    }
    
    
    
    int minDiffInBST(TreeNode* root) {
        vector<int> arr;
        dfs(root, arr);
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int ans=INT_MAX;
        for(int i=0;i<n-1;i++) {
            ans=min(ans, arr[i+1]-arr[i]);
        }
        return ans;
        
    }
};