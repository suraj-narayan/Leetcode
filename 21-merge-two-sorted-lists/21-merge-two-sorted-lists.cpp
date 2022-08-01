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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=NULL;
        if(!list1 and !list2)
            return head;
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        if(list1->val<list2->val)
        {
            head=list1;
            list1=list1->next;
        }
        else
        {
        
            head=list2;
            list2=list2->next;
        }
        ListNode* temp=head;
        
        
        while(list1 and list2)
        {
            if(list1->val<list2->val)
        {
                head->next=list1;
            head=list1;
            list1=list1->next;
        }
        else
        {
            head->next=list2;
            head=list2;
            list2=list2->next;
        }
        }
        while(list1)
        {
            head->next=list1;
            head=list1;
            list1=list1->next;
        }
        while(list2)
        {
            head->next=list2;
            head=list2;
            list2=list2->next;
        }
        
        return temp;
        
        
        
        
        
        
        
        
        
    
    }
};