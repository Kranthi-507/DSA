1class Solution {
2public:
3       void findSum(int ind,int sum,vector<int> &ds,vector<vector<int>> &result,vector<int> &c){
4    
5                if(sum==0){
6                     result.push_back(ds);
7                    return ;
8                    }
9
10       // sum-=c[ind];
11           for(int i=ind;i<c.size();i++){
12               if(i>ind&&c[i]==c[i-1])
13                   continue;
14               if(c[i]>sum)
15                   break;
16           
17                     ds.push_back(c[i]);
18             findSum(i+1,sum-c[i],ds,result,c);
19       //sum+=c[ind];
20                 ds.pop_back();
21               
22           }
23        
24        
25        
26        
27
28    }
29    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
30        sort(candidates.begin(),candidates.end());
31         vector<vector<int>> result;
32        vector<int> ds;
33        findSum(0,target,ds,result,candidates);
34        return result;
35        
36    }
37};