class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>p;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                p.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                p.push_back(nums[i]);
            }
        }
        nums=p;
    }
};