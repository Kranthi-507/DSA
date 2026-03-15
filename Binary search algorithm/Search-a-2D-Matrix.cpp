1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int n=matrix.size(),m=matrix[0].size();
5        int l=0,h=(n*m)-1;
6        int mid;
7        while(l<=h){
8            mid=(l+h)/2;
9            if(matrix[mid/m][mid%m]==target){
10                    return true;
11            }
12            else if(matrix[mid/m][mid%m]<target){
13                l=mid+1;
14            }
15            else
16            {
17                h=mid-1;
18            }
19            
20            
21        }
22        return false;
23        
24    }
25};