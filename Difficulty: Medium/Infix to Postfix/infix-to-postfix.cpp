//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int prec(char c){
      if(c=='^'){
          return 3;
      }
      if(c=='*' || c=='/'){
          return 2;
      }
      if(c=='+' || c=='-'){
          return 1;
      }
      return -1;
  }
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string& s) {
        stack<char>st;
        string result;
        for(int i=0;i<s.length();i++){
            char c=s[i];
        
        if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z') ||(s[i]>='0' && s[i]<='9')){
            result+=s[i];
        }
        else if(s[i]=='('){
            st.push('(');
        }
        else if(s[i]==')'){
            while(st.top()!='('){
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
        while(!st.empty() && prec(s[i])<=prec(st.top())){
            result+=st.top();
            st.pop();
            
        }
              st.push(c);
        }
        }
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        return result;
    }
};



//{ Driver Code Starts.
//  Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends