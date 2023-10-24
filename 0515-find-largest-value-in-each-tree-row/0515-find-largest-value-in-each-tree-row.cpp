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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> que;
        vector<int> ans;
        if(!root)
            return ans;
        que.push(root);
        while(que.size()) {
            int n= que.size();
            int temp = INT_MIN;
            while(n--) {
                TreeNode* t = que.front();
                que.pop();
                temp = max(temp, t->val);
                if(t->left) 
                    que.push(t->left);
                if(t->right)
                    que.push(t->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};