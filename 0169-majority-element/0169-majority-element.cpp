class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto& x:nums){
            mp[x]++;
        }
        int f=n/2;
        int nn=0;
        for(auto&it:mp){
            if(it.second>f){
                nn=it.first;
            }
        }
        return nn;
    }
};