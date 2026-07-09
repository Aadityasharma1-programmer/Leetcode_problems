1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteMiddle(ListNode* head) {
14        if(head==nullptr||head->next==nullptr)return nullptr;
15        int l=0;
16        ListNode*t=head;
17        while(t!=nullptr){
18            l++;
19            t=t->next;
20        }
21        int i=l/2;
22        int count=0;
23        t=head;
24        while(t!=nullptr){
25            count++;
26            ListNode*dl=t->next;
27            if(count==i){
28                t->next=dl->next;
29                delete dl;
30                break;
31            }
32            t=t->next;
33        }
34        return head;
35    }
36};