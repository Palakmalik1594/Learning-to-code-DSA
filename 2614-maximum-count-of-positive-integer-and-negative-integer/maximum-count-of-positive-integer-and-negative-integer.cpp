class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int nu=nums.size();
        int p=0;
        int n=0;
        for(int i=0;i<nu;i++){

            if(nums[i]>0){
                p++;
            }
            else if(nums[i]<0){
                n++;
            }
            }
            return max(p,n);
        }
        
    
};