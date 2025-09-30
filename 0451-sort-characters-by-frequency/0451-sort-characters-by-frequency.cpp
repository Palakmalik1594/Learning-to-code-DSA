class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        vector<pair<int,char>>p;
        for(auto it:mp){
            p.push_back({it.second,it.first});
        }
        sort(p.rbegin(),p.rend());
        string res="";
        for(auto& it:p){
            res+=string(it.first,it.second);
        }
        return res;
    }
};