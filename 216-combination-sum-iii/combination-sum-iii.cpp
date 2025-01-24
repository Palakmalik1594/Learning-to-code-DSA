class Solution {
public:
void help(int i,int sumtillnow,int k,int n,vector<int>&subsets,vector<vector<int>>&answer){
    if(sumtillnow>n){
        return;
    }
    if(k==0){
        if(sumtillnow==n){
            answer.push_back(subsets);
        }
        return;
    }
    if(i==10){
        return;
    }
    subsets.push_back(i);
    sumtillnow+=i;
    help(i+1,sumtillnow,k-1,n,subsets,answer);
    subsets.pop_back();
    sumtillnow-=i;
    help(i+1,sumtillnow,k,n,subsets,answer);
}
    vector<vector<int>> combinationSum3(int k, int n) {
vector<int>subsets;
vector<vector<int>>answer;
int sumtillnow=0;
help(1,sumtillnow,k,n,subsets,answer);
return answer;
        
    }
};