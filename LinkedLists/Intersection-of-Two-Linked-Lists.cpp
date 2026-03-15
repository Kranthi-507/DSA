1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
12        ListNode* temp=headA;
13        set<ListNode*> st;
14        while(temp){
15            st.insert(temp);
16            temp=temp->next;
17        }
18        temp=headB;
19        while(temp){
20            if(st.find(temp)!=st.end())
21                return temp;
22            temp=temp->next;
23        }
24        return NULL;
25    }
26};