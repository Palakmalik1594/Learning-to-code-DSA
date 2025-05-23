class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0;
        int j=0;
        int count=0;
        unordered_map<char,int>mp;
        while(j<s.length()){
            mp[s[j]]++;
        while(mp.size()==3){
            count+=s.length()-j;
            mp[s[i]]--;
           if(mp[s[i]]==0){
            mp.erase(s[i]);
           }
           i++;
        }
        j++;
        }
        return count;
    }
};