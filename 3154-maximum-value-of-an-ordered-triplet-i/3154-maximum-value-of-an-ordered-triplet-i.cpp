class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        long long maxi=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    
                            sum=(1LL*nums[i]-nums[j])*nums[k];
                            maxi=max(maxi,sum);
                           
                            
                }
            }
        }
        return maxi;
    }
};