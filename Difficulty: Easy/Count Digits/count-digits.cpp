class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int m=n;
        int count=0;
        
        
        while(n>0){
            int temp=n%10;
            
            if(temp!=0 && m%temp==0){
                count++;
            }
            
            n=n/10;
        }
        return count;
    }
};