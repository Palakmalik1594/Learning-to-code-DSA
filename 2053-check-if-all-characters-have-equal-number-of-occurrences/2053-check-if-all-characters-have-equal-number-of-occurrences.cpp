class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        vector<int>p;
        for(auto it:mp){
            p.push_back(it.second);
        }
        for(int i=0;i<p.size()-1;i++){
            if(p[i]!=p[i+1]){
                  return false;
            }
        }
        return true;
    }
};