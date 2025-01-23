class Solution {
public:
string S1;
string S2;
string S3;
int dp[101][101];
int recur(int i,int j){
    if(i==S1.length() && j==S2.length()){
        return 1;
    }
if(dp[i][j]!=-1){
    return dp[i][j];
}
    int option1=0;
    if(i<S1.length() && S1[i]==S3[i+j]){
        option1=recur(i+1,j);
    }
    int option2=0;
    if(j<S2.length() && S2[j]==S3[i+j]){
        option2=recur(i,j+1);
    }
    int answer=option1 | option2;
    dp[i][j]=answer;
    return answer;
    }
    bool isInterleave(string s1, string s2, string s3) {
        S1=s1;
        S2=s2;
        S3=s3;
        memset(dp,-1,sizeof(dp));
        if(s1.length()+s2.length()!=s3.length()){
            return false;
        }
        return recur(0,0);

    }
};