//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        if(n==1){
            return 1;
        }
        for(int i=2;i<n;i++){
            if(i*i==n){
                return i;
            }else{
                if((i*i)>n){
                    return (i-1); 
                }
            }
        }
        return 0;
        // Your code goes here
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
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends