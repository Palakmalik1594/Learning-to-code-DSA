class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        int maxlen=0;
        for(int curr=2;curr<n;curr++){
            int start=0,end=curr-1;
            while(start<end){
                int sum=arr[start]+arr[end];
                if(sum<arr[curr]){
                    start++;
                }else if(sum>arr[curr]){
                        end--;
                }else{
                    dp[end][curr]=dp[start][end]+1;
                    maxlen=max(dp[end][curr],maxlen);
                    end--;
                    start++;
                }
            }
        }
        return maxlen==0?0:maxlen+2;
    }
};