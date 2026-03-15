1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    void findIn(TreeNode* root,vector<int> &v){
15        if(root==NULL){
16        return ;
17        }
18        TreeNode *tmp=root;
19        findIn(tmp->left,v);
20        v.push_back(tmp->val);
21        findIn(tmp->right,v);
22        
23 
24    }
25    vector<int> inorderTraversal(TreeNode* root) {
26        vector<int> v;
27        findIn(root,v);
28        return v;
29        
30    }
31};