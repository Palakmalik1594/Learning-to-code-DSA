class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       unordered_map<int,int>mp;
        for(int ch:arr){
            mp[ch]++;
        }
        int n=0.25*arr.size();
        for(auto it:mp){
            if(it.second>n){
                return it.first;
            }
        }
        return {};
    }
};