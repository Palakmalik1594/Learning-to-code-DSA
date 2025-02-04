class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int current=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            current=nums[i]>nums[i-1]? current+nums[i]:nums[i];
            ans=max(current,ans);
        }
        return ans;
    }
};