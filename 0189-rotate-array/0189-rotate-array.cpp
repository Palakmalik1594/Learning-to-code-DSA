class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pp(n);
        for(int i=0;i<n;i++){
            pp[(i+k)%n]=nums[i];
        }
        nums=pp;
    }
};