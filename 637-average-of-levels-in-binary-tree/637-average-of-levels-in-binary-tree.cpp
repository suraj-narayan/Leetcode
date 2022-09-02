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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(!root)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size())
        {
            double n=q.size();
            double temp=0;
            for(int i=0;i<n;i++)
            {
                TreeNode* temp2=q.front();
                q.pop();
                if(temp2->left)
                    q.push(temp2->left);
                if(temp2->right)
                    q.push(temp2->right);
                temp+=temp2->val;
            }
            ans.push_back(temp/n);
        }
        return ans;
    }
};