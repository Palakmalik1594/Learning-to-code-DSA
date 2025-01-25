class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        set<int> w;  

        for (int i = 0; i < n; ++i) {
            if (w.find(nums[i]) != w.end()) {
                return true;  
                }
            w.insert(nums[i]);  
            if (w.size() > k) {
                w.erase(nums[i - k]);  
            }
        }

        return false;  
    }
};