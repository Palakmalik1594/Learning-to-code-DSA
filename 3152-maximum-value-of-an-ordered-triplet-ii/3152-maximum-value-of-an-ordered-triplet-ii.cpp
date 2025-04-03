class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix_s(n,0);
        vector<int>suffix_s(n,0);
        if(n<3) return 0;
       for(int j=1;j<n;j++){
        prefix_s[j]=max(prefix_s[j-1],nums[j-1]);
       }
       for(int j=n-2;j>=0;j--){
        suffix_s[j]=max(suffix_s[j+1],nums[j+1]);
       }
       long long maxval=0;
       for(int j=1;j<n-1;j++){
        maxval=max(maxval,(1LL*prefix_s[j]-nums[j])*suffix_s[j]);
       }
       return maxval;
    }
};