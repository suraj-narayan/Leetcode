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
    
    
    TreeNode* helper(vector<int> nums, int low, int high)
    {
        if(low>high)
            return NULL;
        if(low==high)
        {
            TreeNode* ans=new TreeNode(nums[low]);
            ans->left=NULL;
            ans->right=NULL;
            return ans;
        }
        
        
        int mid=(low+high)/2;
        TreeNode* ans=new TreeNode(nums[mid],  helper(nums, low, mid-1), helper(nums, mid+1, high));
        return ans;
        
        
        
        
        
        
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* ans=helper(nums, 0, nums.size()-1);
        return ans;
    }
};