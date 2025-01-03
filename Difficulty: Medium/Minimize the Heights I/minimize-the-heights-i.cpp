//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n=arr.size();
        if(n==1){
            return 0;
        }
        sort(arr.begin(),arr.end());
        int i=0;
        int j=0;
        
        int diff=arr[n-1]-arr[0];
        for(int i=0;i<n;i++){
            int mini=min(arr[0]+k,arr[i+1]-k);
            int maxi=max(arr[i]+k,arr[n-1]-k);
            if(maxi<0){
                continue;
            }
            diff=min(diff,maxi-mini);
        }        // code here
        return diff;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << ob.getMinDiff(arr, k) << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends