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
    void help(priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> & pq, TreeNode* root, int i, int j)
    {
        pq.push({i, j, root->val});
        if(root->left)
        {
            help(pq, root->left, i-1, j+1);
        }
        if(root->right)
        {
            help(pq, root->right, i+1, j+1);
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        help(pq, root,0, 0);
        vector<vector<int>> ans;
        if(pq.empty())
            return ans;
        int i=-9000;
        while(pq.size())
        {
            vector<int> temp=pq.top();
            pq.pop();
            int a=temp[0];
            int b=temp[1];
            int val=temp[2];
            if(a!=i)
            {
                i=a;
                ans.push_back({val});
                continue;
            }
            ans[ans.size()-1].push_back(val);
            
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};