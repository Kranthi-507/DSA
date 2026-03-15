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
13    
14public:
15    void postTrav(TreeNode * root,vector<int> &v){
16        if(root==NULL){
17            return ;
18        }
19        postTrav(root->left,v);
20        postTrav(root->right,v);
21        v.push_back(root->val);
22    }
23    vector<int> postorderTraversal(TreeNode* root) {
24        vector<int> v;
25        postTrav(root,v);
26        return v;
27        
28        
29    }
30};