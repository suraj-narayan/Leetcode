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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* aux = result;
        int carry = 0;
        int sum = 0;
        while (l1 || l2){     
            sum = carry;
            sum += (l1) ? l1->val : 0;            
            sum += (l2) ? l2->val : 0;
            
            carry = sum / 10;
            aux->val = (carry) ? sum - 10 : sum;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
            if (l1 || l2) aux = aux->next = new ListNode();
        }
        if (carry)
            aux->next = new ListNode(carry);
            
        return result;
    }
};