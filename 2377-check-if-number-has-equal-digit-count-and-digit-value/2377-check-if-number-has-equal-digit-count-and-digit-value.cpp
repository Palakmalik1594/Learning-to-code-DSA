class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int>mp;
        for(char c:num){
            mp[c]++;
        }
        for(int i=0;i<num.size();i++){
            if(mp['0'+i]!=(num[i]-'0')){
                return false;
            }
        }
        return true;
    }
};