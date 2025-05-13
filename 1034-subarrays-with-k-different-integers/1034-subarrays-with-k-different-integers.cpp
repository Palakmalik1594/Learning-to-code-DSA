class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        int count = 0;
        unordered_map<int, int> mp;
        int prefix = 0;

        while (j < n) {
            mp[nums[j]]++;

            if (mp.size() > k) {
                // Shrink from left
                while (mp.size() > k) {
                    mp[nums[i]]--;
                    if (mp[nums[i]] == 0)
                        mp.erase(nums[i]);
                    i++;
                }
                prefix = 0; // reset prefix
            }

            if (mp.size() == k) {
                // Count duplicates from the left
                while (mp[nums[i]] > 1) {
                    mp[nums[i]]--;
                    i++;
                    prefix++;
                }

                count += 1 + prefix;

                // Restore for next iteration
                // Do not move `i` here — keep the window valid
            }

            j++;
        }

        return count;
    }
};
