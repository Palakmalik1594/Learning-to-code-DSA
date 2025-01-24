class Solution {
public:
void help(int i,vector<int>&candidates,int target,vector<int>&subsets,int sumtillnow,vector<vector<int>>&answer){
    if(sumtillnow==target){
        answer.push_back(subsets);
        return;

    }
    if(i>=candidates.size()){
        return;
    }
    if(sumtillnow>target){
        return;
    }
    help(i+1,candidates,target,subsets,sumtillnow,answer);
    sumtillnow+=candidates[i];
    subsets.push_back(candidates[i]);
    help(i,candidates,target,subsets,sumtillnow,answer);
    sumtillnow-=candidates[i];
    subsets.pop_back();


}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>subsets;
        int sumtillnow=0;
        vector<vector<int>>answer;
        help(0,candidates,target,subsets,sumtillnow,answer);
return answer;
    }
};