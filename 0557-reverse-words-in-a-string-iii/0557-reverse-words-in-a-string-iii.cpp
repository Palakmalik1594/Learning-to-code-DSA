class Solution {
public:
    string reverseWords(string s) {
        
        string res="",ss="";
        for(int i=0;i<=s.length();i++){
            if(i==s.length() || s[i]==' '){
                reverse(ss.begin() ,ss.end());
                res+=ss+" ";
                ss="";
                
            }else{
                ss+=s[i];
            }
        }
        if(!res.empty()){
            res.pop_back();
        }
        return res;
    }
};