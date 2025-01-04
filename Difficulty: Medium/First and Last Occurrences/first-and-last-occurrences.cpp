//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int n=arr.size();
        vector<int>v;
        bool found=false;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                v.push_back(i);
                found=true;
                break;
            }
            
            
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==x){
                v.push_back(i);
                break;
            }
            
        }
        if(!found){
            return {-1,-1};
        }
        return v;
        
        // code here
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends