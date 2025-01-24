class Solution {
public:
void combi(int i,int n,int k,vector<int>&subsets,vector<vector<int>>&answer){
    if(k==0){
        answer.push_back(subsets);
        return;

    }
    if(i>n){
        return;
    }
    if(k>n-i+1){
        return;
    }
    subsets.push_back(i);
    combi(i+1,n,k-1,subsets,answer);
    subsets.pop_back();
    combi(i+1,n,k,subsets,answer);


}
    vector<vector<int>> combine(int n, int k) {
        vector<int>subsets;
        vector<vector<int>>answer;
        combi(1,n,k,subsets,answer);
        return answer;
    }
};