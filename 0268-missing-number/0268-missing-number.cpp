class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int p=-1;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]){
                p=i;
                break;
            }
        }
        if(p==-1){

        p=n;
        }
        return p;
    }
};