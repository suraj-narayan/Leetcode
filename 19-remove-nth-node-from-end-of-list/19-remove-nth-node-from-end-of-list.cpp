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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(-1, head);
        ListNode* temp=head;
        int count=0;
        while(temp) {
            count++;
            temp=temp->next;
        }
        int k=count-n;
        temp=dummy;
        while(k--)
            temp=temp->next;
        temp->next=temp->next->next;
        return dummy->next;
        
    }
};