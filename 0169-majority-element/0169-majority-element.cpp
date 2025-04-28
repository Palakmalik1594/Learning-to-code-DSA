class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=nums.size()/2;
        unordered_map<int,int>p;
        for(int m:nums){
            p[m]++;
        }
        for(auto it:p){
            if(it.second>count){
                return it.first;
            }
        }
        return {};
    }
};