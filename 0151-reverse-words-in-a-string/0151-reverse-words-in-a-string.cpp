class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        s+=" ";
         string ss="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
            if(!ss.empty()){
                st.push(ss);
                }
               ss=""; 
        }else{
            ss+=s[i];
        }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty()){
                ans+=" ";
            }
        }
        
        return ans;
    }
};