class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if(n<=1){
            return false;
        }
        int count=0;
        for(int i=2;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count>1){
            return false;
        }
        return true;
    }
};
