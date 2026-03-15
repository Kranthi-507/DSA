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
15    void preTrav(TreeNode* root,vector<int> &v){
16        if(root==NULL){
17            return ;
18  }
19        v.push_back(root->val);
20        preTrav(root->left,v);
21        preTrav(root->right,v);
22        
23        
24    }
25    vector<int> preorderTraversal(TreeNode* root) {
26   vector<int> preorderVector;
27        preTrav(root,preorderVector);
28        return preorderVector;
29        
30    }
31};