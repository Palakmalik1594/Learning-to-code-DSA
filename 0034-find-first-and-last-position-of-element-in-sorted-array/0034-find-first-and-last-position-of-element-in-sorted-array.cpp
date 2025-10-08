class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int ii=-1;
        int jj=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                if(ii==-1){
                    ii=i;
                }
                jj=i;
            }
        }
        return {ii,jj};
    }
};