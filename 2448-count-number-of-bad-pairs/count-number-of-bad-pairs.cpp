class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        long long totalpairs=(long long)n*(n-1)/2;
        unordered_map<int,long long> diffcount;
        for(int i=0;i<n;i++){
            int diff=nums[i]-i;
            totalpairs-=diffcount[diff];
            diffcount[diff]++;
        }
        return totalpairs;
    }
};