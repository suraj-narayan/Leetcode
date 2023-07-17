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
    
    ListNode* neww(ListNode* old, int val) {
        ListNode*  temp= new ListNode(val, old);
        return temp;
        
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> ans;
        stack<int> st, st2;
        while(l1)
        {
            st.push(l1->val);
            l1=l1->next;
        }
        while(l2) {
            st2.push(l2->val);
            l2=l2->next;
            
        }
        int carry=0;
        
        while(st.size() and st2.size()) {
            int t=st.top()+st2.top()+carry;
            ans.push_back(t%10);
            carry=t/10;
            st.pop();
            st2.pop();
        }
        while(st.size()) {
            int t=st.top()+carry;
            ans.push_back(t%10);
            carry=t/10;
            st.pop();
        }
        while(st2.size()) {
            int t=st2.top()+carry;
            ans.push_back(t%10);
            carry=t/10;
            st2.pop();
        }
        if(carry) {
            ans.push_back(carry);
        }
        ListNode* ans2= NULL;
        for(int i=0;i<ans.size();i++) {
            ListNode* temp = neww( ans2, ans[i]);
            ans2 =temp;
        }
        return ans2;
        
        
        
        
    }
};