class Solution {
public:
unordered_map<int,long long>memo;
long long dfs(int i,vector<vector<int>>&questions){
    if(i>=questions.size()) return 0;
    if(memo.find(i)!=memo.end()) return memo[i];
    int next=i+questions[i][1]+1;
    long long solve=questions[i][0]+(next<questions.size()?dfs(next,questions):0);
    long long skip=dfs(i+1,questions);
    return memo[i]=max(solve,skip);
}
    long long mostPoints(vector<vector<int>>& questions) {
        return dfs(0,questions);
        
    }
};