class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        
        
        long long n=(long long)arr.size()+1;
        long long sum1=(n*(n+1))/2;
        long long sum2=0;
        for(int nn:arr){
            sum2+=nn;
        }
        return (int)sum1-sum2;
    }
};