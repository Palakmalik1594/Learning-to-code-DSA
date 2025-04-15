class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>nu;
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>1){
                nu.push_back(it->first);
            }
        }
        return nu;
    }
};