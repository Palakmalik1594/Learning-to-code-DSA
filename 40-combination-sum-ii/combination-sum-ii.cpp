class Solution {
public:
void help(int i,vector<int>&candidates,int target,int sum,vector<int>&subsets,vector<vector<int>>&powerset){
    if(sum==target){
        powerset.push_back(subsets);
        return;
    }
    if(sum>target){
        return;
    }
    if(i==candidates.size()){
        return;
    }
   
    subsets.push_back(candidates[i]);
     sum+=candidates[i];
    help(i+1,candidates,target,sum,subsets,powerset);
    subsets.pop_back();
    sum-=candidates[i];
    while(i+1<candidates.size() && candidates[i]==candidates[i+1]){
        i++;
    }
    help(i+1,candidates,target,sum,subsets,powerset);
    

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>subsets;
        vector<vector<int>>powerset;
        int sum=0;
        sort(candidates.begin(),candidates.end());
        help(0,candidates,target,sum,subsets,powerset);
        return powerset;
    }
};