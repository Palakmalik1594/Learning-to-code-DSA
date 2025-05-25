// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
       string p;
       int n=s.length();
       for(int i=n-1;i>=0;i--){
           p+=s[i];
       }
       return p;
    }
};
