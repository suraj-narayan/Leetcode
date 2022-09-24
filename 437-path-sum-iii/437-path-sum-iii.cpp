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
    
    long long solve(TreeNode* root, vector<long long> temp, int sum) {
        if(!root)
            return 0;
        temp.push_back(temp.back()+root->val);
        
        int count=0;
        if(root->val==sum)
            count++;
        for(int i=1;i<temp.size()-1;i++) {
            if(temp.back()-temp[i-1]==sum)
                count++;
        }
        long long left=solve(root->left, temp, sum);
        long long  right=solve(root->right, temp, sum);
        
        return left+right+count;
    }
    
    
    int pathSum(TreeNode* root, int targetSum) {
        vector<long long > temp;
        temp.push_back(0);
        return solve(root, temp, targetSum);
    }
};