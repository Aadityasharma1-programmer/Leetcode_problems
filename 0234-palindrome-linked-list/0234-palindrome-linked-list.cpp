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
        ListNode*t=head;
        stack<int>st;
        while(t!=nullptr){
            st.push(t->val);
            t=t->next;
        }
        t=head;
        while(t!=nullptr){
            if(st.top()!=t->val)return false;
            t=t->next;
            st.pop();
        }
        return true;

    }
};