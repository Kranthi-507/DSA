1class Solution {
2    
3public:
4    void func(int ind,string s,vector<vector<string>> &res,vector<string> &ds){
5    if(ind==s.size()){
6        res.push_back(ds);
7        return ;
8    }
9        string tmp="";
10    for(int i=ind;i<s.size();i++){
11        tmp.push_back(s[i]);
12
13    if(ispal(tmp)){
14    ds.push_back(tmp);
15        func(i+1,s,res,ds);
16        ds.pop_back();
17        
18    }
19    }
20    }
21bool ispal(string s){
22
23    for(int i=0;i<s.size()/2;i++){
24    if(s[i]!=s[s.size()-i-1])
25        return false;
26    }
27    return true;
28}
29    vector<vector<string>> partition(string s) {
30        vector<vector<string>> res;
31        vector<string> ds;
32        func(0,s,res,ds);
33        return res;
34        
35        
36    }
37};