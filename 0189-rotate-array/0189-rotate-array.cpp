class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>m(nums.size());
       for(int i=0;i<nums.size();i++){
        m[(i+k)%n]=nums[i];
       }
       nums=m;
        
    }
};