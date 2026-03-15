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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        
15
16        if(head->next==NULL && n==1)
17         return NULL;
18     
19        ListNode* second=new ListNode(0,head);
20           ListNode* first=second;
21        for(int i=0;i<n;i++)
22        {
23            head=head->next;
24        }
25        //if(first==NULL)
26         //return head->next;
27        while(head){
28            head=head->next;
29            second=second->next;
30        }
31        second->next=second->next->next;
32        return first->next;
33        
34    }
35};