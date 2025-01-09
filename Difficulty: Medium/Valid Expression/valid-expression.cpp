//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool valid(string &s) {
        stack<char>st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='['|| s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(!st.empty() && 
                ((st.top()=='(' && s[i]==')') || 
                (st.top()=='[' && s[i] == ']') || 
                (st.top()=='{' && s[i] == '}'))){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.empty();
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.valid(str)) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends