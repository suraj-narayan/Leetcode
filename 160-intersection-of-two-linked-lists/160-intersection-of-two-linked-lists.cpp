/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int s1=0, s2=0;
        ListNode* temp=headA;
        while(temp)
        {
            s1++;
            temp=temp->next;
        }
        temp=headB;
        while(temp)
        {
            s2++;
            temp=temp->next;
            
        }
        
        if(s1>s2)
        {
            int a=s1-s2;
            while(a--)
                headA=headA->next;
        }
        else if(s2>s1)
        {
            int a=s2-s1;
            while(a--)
                headB=headB->next;
        }
        
        
        ListNode* ans=NULL;
        while(headA and headB)
        {
            if(headA==headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};