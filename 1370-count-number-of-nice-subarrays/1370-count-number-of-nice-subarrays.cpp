class Solution{
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atm(nums,k)-atm(nums,k-1);
    }
    int atm(vector<int>&nums,int k){
        int i=0;
        int j=0;
        int count=0;
        int maxi=0;
        while(j<nums.size()){
            if(nums[j]%2!=0){
                count++;
                
            }
                while(count>k && i<=j){
                    if(nums[i]%2!=0){
                    
                    count--;
                    }
                    i++;
                }
                
               j++;
                    maxi+=j-i+1;
                }
                return maxi;
            }
};