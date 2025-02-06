class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        unordered_map<int, int> pc;
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int product = nums[i] * nums[j];
                count += 8 * pc[product];
                pc[product]++;
            }
        }
        
        return count;
    }

};