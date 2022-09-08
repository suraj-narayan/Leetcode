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
class BSTIterator {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    
    
    BSTIterator(TreeNode* root) {
        queue<TreeNode*> qu;
        if(root)
            qu.push(root);
        while(!qu.empty())
        {
            TreeNode* temp=qu.front();
            qu.pop();
            pq.push(temp->val);
            if(temp->left)
                qu.push(temp->left);
            if(temp->right)
                qu.push(temp->right);
        }
    }
    
    int next() {
        int temp=pq.top();
        pq.pop();
        return temp;
    }
    
    bool hasNext() {
        return pq.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */