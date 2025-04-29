class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>p;
        unordered_map<int,int>m;
        for(int c:nums){
            m[c]++;
        }
        int count=nums.size()/3;
        for(auto it:m){
            if(it.second>count){
              p.push_back(it.first);
            }
        }
        return p;
    }
};