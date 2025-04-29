class Solution {
public:
    void permu(int pos,vector<vector<int>>&ans,vector<int>&nums){
        if(pos>=nums.size()){
            ans.push_back(nums);
        }
        for(int i=pos;i<nums.size();i++){
        swap(nums[pos],nums[i]);
        permu(pos+1,ans,nums);
        swap(nums[pos],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        permu(0,ans,nums);
        return ans;
    }
};