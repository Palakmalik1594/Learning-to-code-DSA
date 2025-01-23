//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
  vector<int>dp;
  int recur(vector<int>&arr,int index){
      if(index>=arr.size()){
          return 0;
      }
      if(dp[index]!=-1){
          return dp[index];
      }
      int option1=arr[index]+recur(arr,index+2);
      int option2=recur(arr,index+1);
      int answer=max(option1,option2);
      dp[index]=answer;
      return answer;
  }
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr) {
        dp.clear();
        dp.resize(arr.size(),-1);
        return recur(arr,0);
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
        Solution obj;
        int res = obj.findMaxSum(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends