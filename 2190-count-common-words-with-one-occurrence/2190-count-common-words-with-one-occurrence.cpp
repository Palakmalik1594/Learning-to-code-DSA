class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp;
        unordered_map<string,int>ms;
        for(string s:words1){
            mp[s]++;
        }
        for(string s:words2){
            ms[s]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.second==1 && ms[it.first]==1){
                count++;
            }
        }
       
        return count;
    }
};