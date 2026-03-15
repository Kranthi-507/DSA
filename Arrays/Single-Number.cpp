1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans=0;
5        for(auto i: nums)
6        ans=ans^i;
7        return ans;
8    }
9    
10};