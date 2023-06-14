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
    int getMinimumDifference(TreeNode* root) {
        vector<int> arr;
        queue<TreeNode*> qu;
        qu.push(root);
        while(qu.size()) {
            arr.push_back(qu.front()->val);
            if(qu.front()->left) {
                qu.push(qu.front()->left);
            }
            if(qu.front()->right) {
                qu.push(qu.front()->right);
                
            }
            qu.pop();
        }
        sort(arr.begin(), arr.end());
        int ans=INT_MAX;
        for(int i=1;i<arr.size();i++) {
            ans=min(ans, abs(arr[i]-arr[i-1]));
        }
        return ans;
    }
};