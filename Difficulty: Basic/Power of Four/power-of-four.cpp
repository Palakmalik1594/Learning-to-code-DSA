class Solution {
  public:
    int isPowerOfFour(unsigned int n) {
        // Your code goes here
        if(n<=0) return 0;
        while(n%4==0){
            n/=4;
        }
        return n==1;
    }
};