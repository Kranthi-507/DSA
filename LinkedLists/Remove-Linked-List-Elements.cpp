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
13    ListNode* removeElements(ListNode* head, int val) {
14        
15        //ListNode* temphead=new ListNode;
16        //temphead->next=head;
17        while(head!=NULL && head->val==val){
18            head=head->next;
19        }
20        ListNode* temp=head;
21        ListNode *prev=head;
22        while(temp){
23            if(temp->val==val){
24             prev->next=temp->next;
25            delete temp;
26            temp=prev->next;
27            }
28            else{
29                prev=temp;
30                temp=temp->next;
31            }
32
33        }
34
35        return head;
36        
37    }
38};