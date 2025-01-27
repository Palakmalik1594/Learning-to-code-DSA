class Solution {
public:
void help(int i,string &digits,string &helps,vector<string>&ans,unordered_map<char,string>&m){
    
    if(i==digits.size()){
        ans.push_back(helps);
        return;
    }
    string str=m[digits[i]];
    for(int j=0;j<str.size();j++){
        helps.push_back(str[j]);
        help(i+1,digits,helps,ans,m);
        helps.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        if(digits.size()==0){
            return {};
        }
        string helps;
        vector<string>ans;
        help(0,digits,helps,ans,m);
        return ans;
            }

};