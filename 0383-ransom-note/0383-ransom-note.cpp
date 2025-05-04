class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        unordered_map<char,int>cp;
        for(char& c:ransomNote){
            mp[c]++;
        }
        for(char& l:magazine){
            cp[l]++;
        }
        for(auto it:mp){
            if(cp[it.first]<it.second){
            return false;
            }
        }
        return true;
    }
};