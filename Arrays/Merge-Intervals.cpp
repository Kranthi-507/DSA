1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        vector<vector<int>> mi;
5        if(intervals.size()==0){
6            return mi;
7        }
8        sort(intervals.begin(),intervals.end());
9        vector<int> temp=intervals[0];
10        for(auto i:intervals){
11            if(temp[1]>=i[0]){
12                temp[1]=max(temp[1],i[1]);
13            }
14            else{
15                mi.push_back(temp);
16                temp=i;
17            }
18        }
19        mi.push_back(temp);
20        return mi;
21    }
22};