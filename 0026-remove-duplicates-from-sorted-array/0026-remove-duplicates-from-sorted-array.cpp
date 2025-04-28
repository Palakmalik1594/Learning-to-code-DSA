class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        s.insert(nums.begin(),nums.end());
        nums.empty();
        int i=0;
        for(int x:s){
            nums[i++]=x;
        }
        return s.size();
    }
};