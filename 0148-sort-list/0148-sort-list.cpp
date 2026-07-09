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
        vector<int>a;
        ListNode*t=head;
        while(t!=nullptr){
            a.push_back(t->val);
            t=t->next;
        }
        sort(a.begin(),a.end());
        t=head;
        int i=0;
        while(t!=nullptr){
            t->val=a[i];
            i++;
            t=t->next;
        }
        return head;


    }
};