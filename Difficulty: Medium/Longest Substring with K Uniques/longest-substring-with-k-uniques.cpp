//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        int maxi=-1;
        int i=0;
        int j=0;
        unordered_map<char,int>mp;
        while(j<s.length()){
            mp[s[j]]++;
            if(mp.size()<k){
                j++;
            }else if(mp.size()==k){
                maxi=max(maxi,j-i+1);
                j++;
            }else if(mp.size()>k){
                while(mp.size()>k && i<=j){
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
                
                j++;
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
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends