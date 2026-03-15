1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        long long int maxProduct = LONG_MIN;
5        long long int suffProduct=1;
6        long long preProduct=1;
7      
8        int n=nums.size();
9        for(int i=0;i<nums.size();i++){
10           if(preProduct==0)
11           preProduct=1;
12           if(suffProduct==0)
13           suffProduct=1;
14           suffProduct*=nums[i];
15           preProduct*=nums[n-1-i];
16           maxProduct=max(maxProduct, max(preProduct,suffProduct));
17           
18        }
19        
20
21        return  maxProduct;
22        
23    }
24};