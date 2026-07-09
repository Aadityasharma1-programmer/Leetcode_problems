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
        ListNode*t=new ListNode(-1);
        ListNode* current=t;
        ListNode*a=l1;
        ListNode*b=l2;
        int sum=0;
        int carry=0;
        while(a!=nullptr||b!=nullptr){
            sum=carry;
            if(a!=nullptr)sum+=a->val;
            if(b!=nullptr)sum+=b->val;
            ListNode*next=new ListNode(sum%10);
            current->next=next;
            carry=sum/10;
            if(a!=nullptr)a=a->next;
            if(b!=nullptr)b=b->next;
            current = current->next;
        }
        if(carry){
            current->next=new ListNode(carry);
        }
        return t->next;
    }
};