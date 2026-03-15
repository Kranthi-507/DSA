1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        int k=nums1.size()-1;
5        m=m-1;n=n-1;
6        
7        while(m>=0 && n>=0){
8            if(nums1[m]>nums2[n]){
9            nums1[k]=nums1[m];
10            k--;
11            m--;
12            }
13            else{
14            nums1[k]=nums2[n];
15            k--;
16            n--;
17            }
18        }
19        while(m>=0){
20             nums1[k]=nums1[m];
21            k--;
22            m--;
23        }
24         while(n>=0){
25             nums1[k]=nums2[n];
26            k--;
27            n--;
28        }
29        
30    }
31};