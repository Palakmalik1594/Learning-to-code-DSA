//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int minsum(vector<int>&arr,int sum,int n){
      int dp[n+1][sum+1];
      for(int i=0;i<n+1;i++){
          for(int j=0;j<sum+1;j++){
              if(j==0){
                  dp[i][j]=1;
              }else if(i==0){
                  dp[i][j]=0;
              }
          }
      }
      for(int i=1;i<n+1;i++){
          for(int j=1;j<sum+1;j++){
              if(arr[i-1]<=j){
                  dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
              }else{
                  dp[i][j]=dp[i-1][j];
              }
          }
          
      }
      
     vector<int>v;
    int i=n;
     for(int j=0;j<=sum/2;j++){
         if(dp[i][j]){
         v.push_back(j);
     }
     }
     int mins=INT_MAX;
     for(int i=0;i<v.size();i++){
         mins=min(mins,sum-2*v[i]);
     }
     return mins;
  }
    int minDifference(vector<int>& arr) {
        // Your code goes here
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return minsum(arr,sum,n); 
        
    }
};



//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int ans = ob.minDifference(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends