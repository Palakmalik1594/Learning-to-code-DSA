//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countSquares(int n) {
        int c=0;
        for(int i=1;i<n;i++){
            if(i*i<n){
                c++;
            }else{
                break;
            }
        }
        return c;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin >> N;

        Solution ob;
        cout << ob.countSquares(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends