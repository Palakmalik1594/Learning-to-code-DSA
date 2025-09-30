class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]==')') count--;
            if(count!=0) ans.push_back(s[i]);
            if(s[i]=='(') count++;
        }
        return ans;
    }
};