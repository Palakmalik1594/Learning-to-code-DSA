class Solution {
public:
void helper(int i,vector<int>&nums,vector<int>&subsets,vector<vector<int>>&answer){
    if(i==nums.size()){
answer.push_back(subsets);
    }else{
    subsets.push_back(nums[i]);
    helper(i+1,nums,subsets,answer);
    subsets.pop_back();
    while(i+1<nums.size() && nums[i]==nums[i+1]){
        i++;
    }
    helper(i+1,nums,subsets,answer);
}}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>subsets;
        vector<vector<int>>answer;
        helper(0,nums,subsets,answer);
        sort(answer.begin(),answer.end());
        return answer;
    }
};