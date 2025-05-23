class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        
        for(char c:s){
            mp[c]++;
            if(mp[c]==2){
                return c;
            }
        }
       
        return ' ';
    }
};