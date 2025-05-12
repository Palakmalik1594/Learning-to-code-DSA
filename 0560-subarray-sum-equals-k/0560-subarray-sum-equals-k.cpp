class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=0;j<nums.size();j++){
                sum+=nums[j];

                if(sum==k){
                    maxi=max(maxi,j-i+1);
                }
            }
        }
        return maxi;
    }
};