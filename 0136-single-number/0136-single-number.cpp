class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(auto& x:nums){
            mp[x]++;
        };
        int inu=0;
        for(auto& it:mp){
            if(it.second==1){
                inu=it.first;
            }
        }
        return inu;
    }
};