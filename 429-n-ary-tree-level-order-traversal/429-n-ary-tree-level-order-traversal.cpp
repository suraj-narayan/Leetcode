/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        queue<Node*> qu;
        if(!root)
            return ans;
        qu.push(root);
        while(qu.size())
        {
            int n=qu.size();
            vector<int> temp;
            for(int i=0;i<n;i++)
            {
                Node* t=qu.front();
                qu.pop();
                temp.push_back(t->val);
                for(int j=0;j<t->children.size();j++)
                    qu.push(t->children[j]);
                
            }
            ans.push_back(temp);
        }
        return ans;
    }
};