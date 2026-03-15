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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        ListNode *newList= new ListNode();
15         ListNode *temp3=newList;
16
17        ListNode *temp1= list1;
18        ListNode *temp2=list2;
19        while(temp1 && temp2){
20            if(temp1->val <= temp2->val){
21                
22                temp3->next=temp1;
23                temp1=temp1->next;
24                
25
26            }
27            else{
28                temp3->next=temp2;
29                temp2=temp2->next;
30                
31            }
32            temp3=temp3->next;
33        }
34       while(temp1){
35            //temp3->val=temp1->val;
36            temp3->next=temp1;
37                temp1=temp1->next;
38                temp3=temp3->next;
39                
40
41        }
42        while(temp2){
43           //temp3->val=temp2->val;
44                
45                temp3->next=temp2;
46                temp2=temp2->next;
47                temp3=temp3->next;
48
49        }
50        return newList->next;
51        
52    }
53};