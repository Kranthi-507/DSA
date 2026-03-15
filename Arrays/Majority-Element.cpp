1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        if(nums.size()==1)
5        return nums[0];
6        sort(nums.begin(),nums.end());
7        int count=1;
8        int targetNbr;
9        int sz=nums.size()/2;
10        for(int i=0;i<nums.size()-1;i++){
11            if(nums[i] == nums[i+1]){
12                count++;
13                
14                if (count > sz){
15                
16                    targetNbr= nums[i];
17                    break;
18                }
19            }
20            else{
21                //if(count>)
22                count =1;
23            }
24
25
26        }
27        return targetNbr;
28        
29    }
30};