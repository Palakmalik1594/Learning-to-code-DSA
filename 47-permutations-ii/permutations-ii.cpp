class Solution {
public:
void perm(int pos,vector<int>&nums,vector<vector<int>>&ans){
    if(pos>=nums.size()){
        ans.push_back(nums);
    }
    unordered_set<char>m;
    for(int i=pos;i<nums.size();i++){
        if(m.find(nums[i])!=m.end()){
            continue;
        }
        m.insert(nums[i]);
        swap(nums[i],nums[pos]);
        perm(pos+1,nums,ans);
        swap(nums[i],nums[pos]);

    }

}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        perm(0,nums,ans);
        return ans;

        
    }
};