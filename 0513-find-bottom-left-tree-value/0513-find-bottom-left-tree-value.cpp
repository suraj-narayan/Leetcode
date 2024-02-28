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
    
    int heightOfTree(TreeNode* root) {
        if(!root)
            return 0;
        return max(heightOfTree(root->left), heightOfTree(root->right))+1;
    }
    
    int findBottomLeftValue(TreeNode* root) {
        int height = heightOfTree(root);
        queue<TreeNode*> qu;
        qu.push(root);
        while(height>1) {
            int n = qu.size();
            while(n--) {
                TreeNode* temp = qu.front();
                qu.pop();
                if(temp->left)
                    qu.push(temp->left);
                if(temp->right)
                    qu.push(temp->right);
            }
            height--;
        }
        return qu.front()->val;
    }
};