//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_set<char>se;
        int i=0;
        int j=0;
        int maxi=0;
        while(j<s.length()){
            if(se.find(s[j])==se.end()){
                se.insert(s[j]);
                maxi=max(maxi,j-i+1);
                j++;
            }else{
                se.erase(s[i]);
                i++;
            }
            
            
        }
        return maxi;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends