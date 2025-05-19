//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int counts(vector<int>&arr,int sum,int n){
      int t[n+1][sum+1];
      for(int i=0;i<n+1;i++){
          for(int j=0;j<sum+1;j++){
              if(j==0){
                  t[i][j]=1;
              }else if(i==0){
                  t[i][j]=0;
              }
          }
      }
      for(int i=1;i<n+1;i++){
          for(int j=0;j<sum+1;j++){
              if(arr[i-1]<=j){
                  t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j];
              }else{
                  t[i][j]=t[i-1][j];
              }
          }
      }
     return t[n][sum];
      
  }
    int countPartitions(vector<int>& arr, int d) {
        // Code here
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if ((sum + d) % 2 != 0 || sum < d) return 0;
        int tu=(d+sum)/2;
        return counts(arr,tu,n);
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countPartitions(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends