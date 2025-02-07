//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

  class Solution {
  public:
    string firstRepChar(string s) {
    int mask = 0;  

    for (char ch : s) {
        int bit = 1 << (ch - 'a');  // Get the bit position for the character

        if (mask & bit) {  // If bit is already set, return the character
            return string(1, ch);
        }
        mask |= bit;  // Mark the character as seen
    }
    
    return "-1";  // No repeated character found

}
};

//{ Driver Code Starts.
//    Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.firstRepChar(str) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends