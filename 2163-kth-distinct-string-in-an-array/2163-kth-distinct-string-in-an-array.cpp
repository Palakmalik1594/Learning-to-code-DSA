class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(string s:arr){
            mp[s]++;
        }
        vector<string>p;
        for(string s:arr){
            if(mp[s]==1){
                 p.push_back(s);
            }
        }
        if(k>p.size()){
            return "";
        }
        return p[k-1];
    }
};