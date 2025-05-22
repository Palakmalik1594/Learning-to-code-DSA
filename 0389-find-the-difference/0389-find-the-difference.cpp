class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
          unordered_map<char,int>mpp;
        for(char c:s){
            mp[c]++;
        }
        for(char ss:t){
            mpp[ss]++;
        }
        char fin=' ';
        for(auto it:mpp){
            char ch=it.first;
            int f1=it.second;
            int f2=mp[ch];
            if(f1!=f2){
                fin=ch;
                break;
            }
        }
        return fin;
    }
};