1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int l=0; 
5        int h=nums.size()-1;
6        int m;
7        
8        while(l<=h){
9            m=(l+h)/2;
10            if(nums[m] == target)
11             return m;
12        if((nums[l]<=nums[m]) ){
13        if((target>= nums[l]) && target < nums[m]){
14                h=m-1;
15                //continue;
16            }
17            else{
18                l=m+1;
19            }
20        }
21            else{
22                if((target>nums[m] && target > nums[h]) || (target<nums[m] && target < nums[h]) )
23                h=m-1;
24                else
25                l=m+1;
26                continue;
27            }
28
29        }
30        return -1;
31    }
32};