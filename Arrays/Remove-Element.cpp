1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int i=0,j=0;
5        while(i<nums.size()){
6            if(nums[i]!=val){
7            nums[j]=nums[i];
8            j++;
9            }
10            i++;
11        }
12        return j;
13        
14    }
15};