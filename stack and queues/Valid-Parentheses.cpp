1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        for(int i=0;i<s.length();i++){
6            if(s[i]=='('|| s[i]=='{'||s[i]=='['){
7                st.push(s[i]);
8            }
9            else{
10                if(!st.empty() &&((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') ||(s[i]==']' && st.top()=='['))) {
11                    st.pop();
12                }
13                else{
14                    //cout<<"here";
15                    return false;
16                }
17                 
18
19            }
20        }
21
22        if(st.empty())
23            return true;
24        return false;
25        
26    }
27};