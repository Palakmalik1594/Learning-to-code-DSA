class Solution {
  public:
    int findMinInsertions(string &s1) {
        // code here
         string s2=s1;
        reverse(s2.begin(),s2.end());
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>>t(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }

        }
        int p=n-t[n][m];
        return p;
    }
};