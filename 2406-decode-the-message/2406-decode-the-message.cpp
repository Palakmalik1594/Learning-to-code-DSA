class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mp;
        char curr='a';
        for(char cu:key){
            if(cu!=' ' && mp.find(cu)==mp.end()){
                mp[cu]=curr;
                curr++;
            }
        }
        string result="";
        for(char c:message){
            if(c==' '){
                result+=' ';
            }else{
                result+=mp[c];
            }
        }
        return result;
    }
};