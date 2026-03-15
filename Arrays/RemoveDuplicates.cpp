#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       //std::map<int,int> mp;
       int j=0,i=0;
       while(i<nums.size()){
        if(nums[i]!=nums[j]){
            j=j+1;
            nums[j]=nums[i];
        }
        i++;

       }
       return j+1;
       
    }
};