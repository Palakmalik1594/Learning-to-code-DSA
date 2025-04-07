//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        map<int,int>mp;
        int i=0;
        int j=0;
        int ans=0;
        int k=pat.length();
        unordered_map<char,int>sc;
        unordered_map<char,int>tc;
        for(char c:pat){
            sc[c]++;
        }
        while(j<txt.length()){
            tc[txt[j]]++;
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                if(sc==tc){
                    ans++;
                }
            
                tc[txt[i]]--;
                if(tc[txt[i]]==0) tc.erase(txt[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends