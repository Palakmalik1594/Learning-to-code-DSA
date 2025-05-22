class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int>t;
        unordered_map<int,int>mp;
        for(int c:arr){
            mp[c]++;
        }
        for(auto it:mp){
            if(it.second==2){
                t.push_back(it.first);
            }
        }
        return t;
    }
};