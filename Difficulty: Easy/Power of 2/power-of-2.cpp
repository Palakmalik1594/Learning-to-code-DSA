// User function Template for C++

class Solution {
  public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(int n) {
        // code here
        if(n<=0){
            return false;
        }
        while(n%2==0){
        n/=2;
        }
        return n==1;
        
    }
};