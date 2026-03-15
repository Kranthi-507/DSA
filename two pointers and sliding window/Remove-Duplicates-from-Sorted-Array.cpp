1#include <bits/stdc++.h>
2using namespace std;
3class Solution {
4public:
5    int removeDuplicates(vector<int>& nums) {
6       //std::map<int,int> mp;
7       int j=0,i=0;
8       while(i<nums.size()){
9        if(nums[i]!=nums[j]){
10            j=j+1;
11            nums[j]=nums[i];
12        }
13        i++;
14
15       }
16       return j+1;
17       
18    }
19};