1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int i=0,j=s.size()-1;
5        while(i<=j){
6            char temp=s[i];
7            s[i]=s[j];
8            s[j]=temp;
9            i++;
10            j--;
11        }
12    }
13};