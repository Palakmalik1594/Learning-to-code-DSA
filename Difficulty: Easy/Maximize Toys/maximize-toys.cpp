//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int toyCount(int N, int K, vector<int> arr) {
        // code here
        long long sum=0;
        int count=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]<=K){
                sum+=arr[i];
                count++;
            }else{
                break;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends