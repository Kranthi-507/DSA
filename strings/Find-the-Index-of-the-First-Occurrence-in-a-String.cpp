1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        if(haystack.size()<needle.size())
5         return -1;
6         for(int i=0;i<haystack.size()-needle.size()+1;i++){
7            int count=0;
8            
9            for(int j=0;j<needle.size();j++)
10            {
11                if(haystack[i+j]!=needle[j])
12                    {
13                        count=0;
14                        break;
15
16                    }
17                    count++;
18                if(count==needle.size()){
19                    return i;
20
21                }
22
23            }
24           
25         }
26         return -1;
27        
28    }
29};