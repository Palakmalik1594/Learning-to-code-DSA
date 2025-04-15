class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=accumulate(nums.begin(),nums.end(),0);
        int lt=0;
        int rt=0;
        for(int i=0;i<nums.size();i++){
            rt=totalsum-lt-nums[i];
            if(lt==rt){
                return i;
            }
            lt+=nums[i];
        }
        return -1;
    }
};