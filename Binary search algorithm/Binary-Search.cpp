1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low=0, high=nums.size()-1;
5        
6
7        while(low <=high){
8            int mid= (low+high)/2;
9            if(nums[mid]==target)
10                return mid;
11            if(nums[mid]<target)
12                low=mid+1;
13            else 
14                high=mid-1;
15
16        }
17        return -1;
18        
19    }
20};