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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        if(!root)
            return ans;
        
        queue<TreeNode*> que;
        que.push(root);
        while(que.size())
        {
            temp.clear();
            int n=que.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* t=que.front();
                que.pop();
                temp.push_back(t->val);
                if(t->left)
                    que.push(t->left);
                if(t->right)
                    que.push(t->right);
            }
            
            ans.push_back(temp);
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};