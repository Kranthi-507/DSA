1class Solution {
2    
3public:
4    void findCombinationSum(vector<int> ds,vector<vector<int>> &v,vector<int> &cand,int target,int sum,int i,int n){
5        if(sum>target)
6            return ;
7        if(sum==target){
8           //if(sum==target){
9
10           v.push_back(ds);
11          // }
12            
13            return ;
14        }
15        if(i>=n)
16            return ;
17        ds.push_back(cand[i]);
18         //findCombinationSum(ds,v,cand,target,sum+cand[i],i+1,n);
19        findCombinationSum(ds,v,cand,target,sum+cand[i],i,n);
20       
21         ds.pop_back();
22        findCombinationSum(ds,v,cand,target,sum,i+1,n);
23}
24    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
25        vector<vector<int>> v;
26        vector<int> ds;
27        int n=candidates.size();
28        findCombinationSum(ds,v,candidates,target,0,0,n);
29        return v;
30        
31    }
32};