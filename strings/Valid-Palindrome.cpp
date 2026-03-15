1class Solution {
2public:
3    bool isPalindrome(string s) {
4     /*   string s1="";
5        for(int i=0;i<s.size();i++){
6            if(s[i]>='a' && s[i]<='z'){
7                s[i]=s[i];
8            }
9            else if(s[i]>='A' && s[i]<= 'Z'){
10                s1 = s1+ (char(97+(int(s[i])-65)));
11            }
12            else{
13                if(s[i]>='0' && s[i]<='9'){
14                    s1+=s[i];
15                }
16            }
17        }*/
18
19       // cout<<s1;
20       //s=s1;
21       //delete s1;
22        int i=0, j= s.size()-1;
23        while(i<=j){
24            if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A' && s[i]<='Z') ||(s[i]>='0' && s[i]<='9')))
25            {
26            i++;
27            continue;
28            }
29        if(!((s[j]>='a'&&s[j]<='z')||(s[j]>='A' && s[j]<='Z') ||(s[j]>='0' && s[j]<='9')))
30
31            {
32                j--;
33                continue;
34            }
35            if(s[i]>='A' && s[i]<='Z')
36                s[i]=s[i]-'A'+'a';
37            if(s[j]>='A' && s[j]<='Z')
38                s[j]=s[j]-'A'+'a';
39
40        if(s[i]!=s[j])
41            return false;
42        i++;
43        j--;
44
45        }
46        
47        return true;
48
49        
50    }
51};