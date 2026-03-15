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
11
12
13class Solution {
14public:
15    ListNode* reverseList(ListNode* head) {
16        ListNode* NN, *prev=NULL;
17        while(head){
18            NN=head->next;
19            head->next=prev;
20            prev=head;
21            head=NN;
22        }
23        return prev;
24       
25    }
26};