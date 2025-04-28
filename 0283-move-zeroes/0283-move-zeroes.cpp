class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>m;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                m.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                m.push_back(nums[i]);
            }
        }
        nums=m;
    }
};