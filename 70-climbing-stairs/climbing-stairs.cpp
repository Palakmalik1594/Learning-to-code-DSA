class Solution {
public:
int help(vector<int>&dp,int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=help(dp,n-1)+help(dp,n-2);
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return help(dp,n);
    }
};