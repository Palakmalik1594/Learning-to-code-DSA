// User function Template for C++

class Solution {
  public:
    int cutRod(vector<int> &price) {
        // code here
        int n=price.size();
        vector<int>arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        int N=arr.size();
        int W=N;
        int t[N+1][W+1];
        for(int i=0;i<N+1;i++){
            for(int j=0;j<W+1;j++){
                if(i==0 || j==0){
                    t[i][j]=0;
                }
            }
        }
        for(int i=1;i<N+1;i++){
            for(int j=1;j<W+1;j++){
                if(arr[i-1]<=j){
                    t[i][j]=max(price[i-1]+t[i][j-arr[i-1]],t[i-1][j]);
                }else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][W];
        
    }
};