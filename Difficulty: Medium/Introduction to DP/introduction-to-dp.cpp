//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  const int mod=1e9+7;
  vector<int>dp;
    long long int topDown(int n) {
        dp.assign(n+1,-1);
        return fib(n);
        // code here
    }
    int fib(int n){
        
        if(n<=1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=(fib(n-1)+fib(n-2))%mod;
    }
    int cases(int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        vector<int>dp(n+1,0);
        
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%mod;
        }
        return dp[n];
    }
    long long int bottomUp(int n) {
        
        return cases(n);
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends