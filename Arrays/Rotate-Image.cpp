1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int length=matrix.size();
5        for(int i=0;i<length;i++){
6            for(int j=i+1;j<length;j++){
7                swap(matrix[i][j],matrix[j][i]);
8            }
9        }
10        for(int i=0;i<length;i++){
11        
12            reverse(matrix[i].begin(),matrix[i].end());
13        }
14        
15    }
16};