class Solution {
public:
void permu(int pos,vector<int>&nums,vector<vector<int>>&answer){
    if(pos>=nums.size()){
        answer.push_back(nums);
    }
    for(int i=pos;i<nums.size();i++){
        swap(nums[pos],nums[i]);
        permu(pos+1,nums,answer);
        swap(nums[i],nums[pos]);

    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>answer;
        permu(0,nums,answer);
       // sort(answer.begin(),answer.end());
        return answer;
    }
};