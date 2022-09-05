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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(-101, head);
        ListNode* temp=dummy;
        while(temp->next)
        {
            if(temp->next->next and temp->next->val==temp->next->next->val) { 
            ListNode* temp2=temp->next;
                while(temp2->next and temp2->val==temp2->next->val)
                {
                    temp2=temp2->next;
                }
                temp->next=temp2->next;
                
                
            }
            else
                temp=temp->next;
        }
        return dummy->next;
        
    }
};