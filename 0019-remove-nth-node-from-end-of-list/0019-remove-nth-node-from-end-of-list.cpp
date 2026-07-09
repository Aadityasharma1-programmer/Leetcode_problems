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
        ListNode*t=head;
        int l=0;
        while(t!=nullptr){
            l++;
            t=t->next;
        }
        int i=l-n;
        if(l==n){
            return head->next;
        }
        t=head;
        int count=0;
        while(t!=nullptr){
            count++;
            if(count==i){
                ListNode*dl=t->next;
                t->next=dl->next;
                delete dl;
                break;
            }
            t=t->next;
        }
        return head;
    }
};