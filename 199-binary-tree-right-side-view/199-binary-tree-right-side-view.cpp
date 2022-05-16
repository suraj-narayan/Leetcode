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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        
        TreeNode* temp;
        
        queue<TreeNode*> q;
        
        if(root)
        q.push(root);
        
        while(q.size())
        {
            ans.push_back(q.front()->val);
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                temp=q.front();
                q.pop();
                if(temp->right)
                {
                    q.push(temp->right);
                }
                if(temp->left)
                {
                    q.push(temp->left);
                }
            }
        }
        return ans;
        
        
    }
};