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
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        int left_hight=0,right_hight=0;
        TreeNode *ptr1=root,*ptr2=root;
        
        while(ptr1!=NULL) //Count the Left hight
            ptr1=ptr1->left,left_hight++;
        while(ptr2!=NULL) //Count the Right hight
            ptr2=ptr2->right,right_hight++;
        
        if(left_hight==right_hight)
            return pow(2,left_hight)-1;
        
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};