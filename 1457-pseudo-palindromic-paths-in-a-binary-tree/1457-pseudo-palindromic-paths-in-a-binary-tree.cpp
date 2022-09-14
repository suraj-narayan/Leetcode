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
    
    
    bool check(vector<int>& arr)
    {
        int count=0;
        for(int i=0;i<9;i++)
        {
            if(arr[i]&1)
            {
                if(count)
                    return false;
                count++;
                continue;
            }
        }
        return true;
        
    }
    
    int solve (TreeNode* root, vector<int> arr)
    { 
        if(!root)
            return 0;
        if(!root->left and !root->right)
        {
            arr[root->val-1]++;
            if(check(arr))
                return 1;
            return 0;
        }
        int ans=0;
        arr[root->val-1]++;
        if(root->left)
            ans+=solve(root->left, arr);
        if(root->right)
            ans+=solve(root->right, arr);
        return ans;
        
            
    }
    
    
    
    
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> arr(9, 0);
        
        int ans=solve(root, arr);
        return ans;
        
    }
};