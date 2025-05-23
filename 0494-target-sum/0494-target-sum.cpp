class Solution {
public:
    int subways(vector<int>&arr,int sum,int n){
        int t[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(j==0){
                    t[i][j]=1;
                }else if(i==0){
                    t[i][j]=0;
                }
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(arr[i-1]<=j){
                t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
                }else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][sum];
    }
    int findTargetSumWays(vector<int>& arr, int target) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if((target+sum)%2!=0 || sum<abs(target)) return 0;
        int du=(target+sum)/2;
        return subways(arr,du,n);
    }
};