class Solution {
public:
void help(vector<int>nums,int i,vector<int>&subset,vector<vector<int>>&answer){
        if(i==nums.size()){
            answer.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        help(nums,i+1,subset,answer);
        subset.pop_back();
        help(nums,i+1,subset,answer);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>answer;
        vector<int>subset;
        help(nums,0,subset,answer);
        return answer;
    }
};