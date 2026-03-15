1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mp;
5        vector<int> v;
6        int f=0;
7        int p,q;
8        for(auto it:nums)
9            mp[it]++;
10        for(auto it:nums){
11            if (mp[target-it]>=1 )
12            {
13                if(it*2==target)
14                    if(mp[it]<2)
15                        continue;
16                p=target-it;
17                q=it;
18                f=1;
19                break;
20                
21            }
22        }
23        if(f){
24        int m;
25       for(int i=0;i<nums.size();i++){
26        if(p==nums[i]){
27            v.push_back(i);
28           m=i;
29            break;
30        }
31        
32       }
33         for(int i=0;i<nums.size();i++){
34        if(q==nums[i] && i!=m){
35            v.push_back(i);
36           //m=i;
37            break;
38        }
39        
40       }
41        }
42        if (v.size()==2)
43        return v;
44        else
45            return {};
46    }
47        
48};