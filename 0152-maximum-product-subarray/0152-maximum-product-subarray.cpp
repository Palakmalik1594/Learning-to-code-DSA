class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxpro=nums[0];
        int minpro=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int curr=nums[i];
            if(curr<0){
                swap(maxpro,minpro);
            }
            maxpro=max(curr,curr*maxpro);
            minpro=min(curr,curr*minpro);
            ans=max(ans,maxpro);
        }
        return ans;
    }
};