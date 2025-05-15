//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
  int t[1001][1001];
  int knap(int w,vector<int>&val,vector<int>&wt,int n){
     
      if(n==0 || w==0){
          return 0;
      }
      if(t[n][w] !=-1){
          return t[n][w];
      }
      
      if(wt[n-1]<=w){
          return t[n][w]= max(val[n-1]+knap(w-wt[n-1],val,wt,n-1),knap(w,val,wt,n-1));
      }else{
      return t[n][w]=knap(w,val,wt,n-1);
      }
      
  }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n=wt.size();
        memset(t,-1,sizeof(t));
        return knap(W,val,wt,n);
    }
};


//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapsack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends