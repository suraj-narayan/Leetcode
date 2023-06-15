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
    int maxLevelSum(TreeNode* root) {
        int ans=INT_MIN, i=0;
        int l=1;
        queue<TreeNode*> qu;
        qu.push(root);
        while(qu.size()) {
            int n=qu.size();
            int summ=0;
            for(int i=0;i<n;i++) {
                summ+=qu.front()->val;
                if(qu.front()->left)
                    qu.push(qu.front()->left);
                if(qu.front()->right) {
                    qu.push(qu.front()->right);
                }
                qu.pop();
                
            }
            if(summ>ans) {
                ans=summ;
                i=l;
            }
            l++;
        }
        return i;
    }
};