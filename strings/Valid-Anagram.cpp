1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        map<char,int> mp;
5        map<char,int> mp2;
6        if(s.size()!=t.size())
7            return false;
8        for(int i=0;i<s.size();i++){
9           /*if(mp[s[i]]==0)
10            mp[s[i]]=0;
11            else */
12             mp[s[i]]++;
13           /* if(mp2[t[i]]==0)
14            mp2[t[i]]=0;
15            else */
16             mp2[t[i]]++;
17
18        }
19        for(auto i:mp){
20            cout<<" "<<i.first<<":"<<i.second;
21        }
22        return mp==mp2;
23        
24    }
25};