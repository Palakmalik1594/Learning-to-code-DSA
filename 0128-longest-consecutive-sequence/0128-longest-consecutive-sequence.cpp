class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int longest=1;
        int small=INT_MIN;
        if(nums.size()==0) return 0;
        for(int i=0;i<nums.size();i++){
               if(nums[i]-1==small){
                count+=1;
                small=nums[i];

               }else if(nums[i]!=small){
                count=1;
                small=nums[i];
               }
               longest=max(longest,count);
        }
    return longest;
    }
};