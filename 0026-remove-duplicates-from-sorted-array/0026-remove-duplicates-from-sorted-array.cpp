class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int m=s.size();
        int i=0;
        for(int x:s){
            nums[i++]=x;
        }
        return m;
        
    }
};