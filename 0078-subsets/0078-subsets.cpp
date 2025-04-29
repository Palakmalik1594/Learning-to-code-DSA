class Solution {
public:
void help(int pos,vector<int>& nums,vector<vector<int>>&ans,vector<int>&subset){
    if(pos==nums.size()){
        ans.push_back(subset);
        return;
    }
    subset.push_back(nums[pos]);
    help(pos+1,nums,ans,subset);
    subset.pop_back();
    help(pos+1,nums,ans,subset);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subset;
        vector<vector<int>>ans;
        help(0,nums,ans,subset);
        return ans;
    }
};