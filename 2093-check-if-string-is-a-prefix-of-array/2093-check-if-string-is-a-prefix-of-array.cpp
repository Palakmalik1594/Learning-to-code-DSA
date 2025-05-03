class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ss="";
        for(int i=0;i<words.size();i++){
            ss+=words[i];
            if(ss==s){
                return true;
            }
        }
        return false;
    }
};