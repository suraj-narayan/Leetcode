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
    ListNode* sortList(ListNode* head) {
        priority_queue<int> pq;
        
        ListNode* ans=NULL;
        while(head) {
            pq.push(head->val);
            head=head->next;
        }
        while(pq.size()) {
            ans= new ListNode(pq.top(), ans);
            pq.pop();
        }
        return ans;
    }
};