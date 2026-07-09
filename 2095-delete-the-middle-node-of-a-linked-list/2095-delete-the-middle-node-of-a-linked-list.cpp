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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr||head->next==nullptr)return nullptr;
        int l=0;
        ListNode*t=head;
        while(t!=nullptr){
            l++;
            t=t->next;
        }
        int i=l/2;
        int count=0;
        t=head;
        while(t!=nullptr){
            count++;
            ListNode*dl=t->next;
            if(count==i){
                t->next=dl->next;
                delete dl;
                break;
            }
            t=t->next;
        }
        return head;
    }
};