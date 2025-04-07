class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        
        int mins=INT_MAX;
        for(int ch=l;ch<=r;ch++){
            int i=0;
            int j=0;
            int sum=0;
        while(j<n){
            sum+=nums[j];
            if(j-i+1<ch){
                j++;
            }else if(j-i+1==ch){
                if(sum>0){
                mins=min(sum,mins);
                }
                sum-=nums[i];
                i++;
                j++;
            }
        }
        }
        return (mins==INT_MAX)?-1:mins;
    }
};