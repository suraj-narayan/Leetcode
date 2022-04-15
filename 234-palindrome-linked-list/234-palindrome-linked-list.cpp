/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        while(temp)
        {
            n++;
            temp=temp->next;
            
        }
        temp=head;
        stack<int> arr;
        for(int i=0;i<n/2;i++)
        {
            arr.push(temp->val);
            temp=temp->next;
        }
        
        if(n&1)
            temp=temp->next;
        
        for(int i=0;i<n/2;i++)
        {
            if(arr.top()!=temp->val)
                return false;
            arr.pop();
            temp=temp->next;
        }
        return true;
        
        
        
        
        
        
    }
};