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
13    ListNode* deleteDuplicates(ListNode* head) {
14
15        ListNode* temp=head;
16        while(temp && temp->next!=NULL){
17            if(temp->val==temp->next->val)
18            temp->next=temp->next->next;
19            else 
20                temp=temp->next;
21        }
22        return head;
23        
24    }
25};