class Solution {
  public:
    int count(vector<int>& coins, int sum) {
        // code here.
        int coinss=coins.size();
        int t[coinss+1][sum+1];
        for(int i=0;i<coinss+1;i++){
            for(int j=0;j<sum+1;j++){
                if(j==0){
                    t[i][j]=1;
                }else if(i==0){
                    t[i][j]=0;
                }
            }
        }
        for(int i=1;i<coinss+1;i++){
            for(int j=0;j<sum+1;j++){
                if(coins[i-1]<=j){
                    t[i][j]=t[i-1][j]+t[i][j-coins[i-1]];
                }else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[coinss][sum];
    }
};