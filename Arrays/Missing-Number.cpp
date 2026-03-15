1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4
5        int n=nums.size();
6        int sum;
7      return (n*(n+1)/2)-accumulate(nums.begin(),nums.end(),sum);
8        //return missingNbr;
9        
10    }
11};